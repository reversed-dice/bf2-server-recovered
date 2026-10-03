# Matching cookbook

Compiler idioms for GCC 3.4.6 / 4.0.3 on x86-64, indexed by the residue you see
in the ASM diff. Read this before rewriting a near-miss: a near-miss is almost
never a wrong semantic, it is a source spelling the compiler reads differently,
and every lever below has a signature in the diff.

Each entry is: **symptom in the diff -> cause -> source lever -> measured
effect.** Measured effects are byte-match scores from the project scorer, kept
because they say how far a lever moves a real target. "Measured at zero, do not
repay" entries are dead ends kept deliberately so nobody spends a session
re-deriving them.

How the byte-match works, the score mask, and the measurement invariant live in
[measurement.md](measurement.md).

---

## 0. Read the diff first

- Get the compiler to answer instead of guessing. `gcc -O2 -da` dumps RTL after
  every optimization pass. `.NN.greg` carries the conflict graph, spill
  decisions and reloads with the register named; `.NN.sched2` carries
  scheduling. When the residue is an instruction order, a spill or a register
  choice and not a shape, the greg/sched2 dump names the responsible pass
  directly.
- Score per **emitted symbol**, and pass `-r` to objdump, or every near-miss
  reads low. Both mistakes look like a broken candidate, not a broken tool. See
  [measurement.md](measurement.md).
- A residue is almost always one of: flag axis, prologue form, block/branch
  order, register allocation, or a stack-slot assignment. The rest of this file
  is those categories.

---

## 1. Which compiler

The reference binary is **mixed GCC 3.4.6 / 4.0.3**. `readelf -p .comment`: 5
objects 3.4.6, 783 objects 4.0.3. Most 4.0.3 is statically linked third party
(libc / libstdc++ / zlib / Python glue), but at least some target `dice_*`
families are genuinely 4.0.3 (the whole `ConsoleClass::getObjectRangeAsString`
45-instruction sub-shape, 655 functions, 100% under 4.0.3 against a ~60-70%
ceiling under 3.4.6).

- **Try both, confirmed-first.** Try the compiler already confirmed for the
  exact address first, else 3.4 then 4.0. A translation-unit hint (from the
  anonymous-namespace mangling `_GLOBAL__N_<file>.cpp_<hash>`) can reorder the
  attempt when a sibling of the same source file has a confirmed compiler, but
  must never suppress the fallback: a wrong hint can never block try-both.
- **Never pin a compiler blind from `.comment`.** The `.comment`-to-symbol
  correlation is unreliable (790 vs 788 entries, heads already mis-aligned). A
  wrong compiler written hard would silently block the fallback.
- **A whole family can flip on the compiler alone.** Signs it is a 4.0.3 family:
  same instruction count both sides, but 3.4.6 plateaus mid-60s while 4.0.3
  jumps to 90%+. Examples flipped this way: `ConsoleClass::executeObjectMethod`
  buckets (bfSound, BoneAnimation), the 43-ins `getObjectRangeAsString`
  sub-shape (56% -> 93% just by compiler). Do not assume 4.0.3 everywhere: on
  many families 3.4.6 wins by ~7 points (`getReturnValueAsString`,
  several `dtor` and `reg-alloc` addresses).

---

## 2. Flag axis (`-f...`) - 51% of near-misses gain from one flag

With a frozen command line, a candidate whose only fault is a missing flag reads
as a semantic failure. Measured on 76 near-misses whose
source still existed: **39 (51%) score strictly higher with one extra flag**,
and three go straight to 100% with `-fno-strict-aliasing`.

| Flag | Residue it fixes |
|---|---|
| `-fno-strict-aliasing` | aliasing, stack layout (also flips slot order) |
| `-fno-reorder-blocks` | block order |
| `-fno-tree-dominator-opts` | CSE, propagation (4.0 only) |
| `-fno-guess-branch-probability` | cold-epilogue duplication |
| `-fcrossjumping` | a whole return block emitted extra (see 6) |
| `-fno-optimize-sibling-calls` | a tail call present or missing |
| `-fno-regmove`, `-fno-cprop-registers` | register choice |

Rules that do not re-derive:

- **A candidate carries its own flags** in a comment:
  `// BF2_FLAGS: -fno-strict-aliasing`. One parser reads it everywhere.
- **Whitelist, never a pattern.** An unknown flag is an error; nothing that reads
  or writes a path may be allowed (`-I`, `-o`, `-include`, `@file`).
- **Sweep the flag axis before rewriting a plateau, not after**: a few seconds
  and a 51% chance of a gain, against a rewrite session.
- **GCC 3.4.6 knows no `-f[no-]tree-*`** (tree-SSA arrived in 4.0): filter them
  out for 3.4, else each try is a wasted compile and a compile error that reads
  as a broken candidate.
- **This is not a new global default.** Under `-fno-strict-aliasing` ~1 function
  in 500 of the recovered corpus stops matching: the binary is a mixed build,
  flags vary per object file too.
- **After adding a flag to the swept set, re-sweep the stored near-misses**: a
  candidate scored before the addition never saw the flag.

---

## 3. Prologue and epilogue

### PUSH vs MOV to save callee-saved registers is computed, not chosen

`- PUSH RBX` vs `+ MOV QWORD PTR [RSP-0x10],RBX ; SUB RSP,N` is the dominant
residue of the console family. It is `ix86_compute_frame_layout` calling
`expensive_function_p((nregs - 1) * 20)`:

- **One register saved: always PUSH.** Threshold `(1-1)*20 = 0`, the first
  active instruction exceeds it, the function is declared expensive, slow
  prologue chosen.
- **Two or more: MOV,** unless the block-frequency-weighted instruction sum
  exceeds `(nregs-1) * 20 * entry_freq`.

Measured, project `g++-3.4`, straight-line body, two registers saved:

| stores in body | instructions emitted | prologue |
|---:|---:|---|
| 0 | 16 | MOV |
| 12 | 41 | MOV |
| 16 | 47 | PUSH |
| 28 | 71 | PUSH |

Practical: to get `PUSH RBX` on a small function, make it use exactly one
callee-saved register, do not hunt a flag. A target saving two registers on a
short body is not reachable by shrinking; make it keep two.

### Duplicated epilogue around an `abort`

Declare `abort` (and any never-returning callee) `noreturn`. Measured 34.1% ->
85.7% on one target. `-fno-guess-branch-probability` also targets cold-epilogue
duplication.

### Duplicated return block (crossjumping)

The reference build pins `-fno-crossjumping`, so the source decides whether tails are
shared. See section 6.

---

## 4. Register allocation - the common wall

This is the residue that stays after everything else matches, and it is the same
on every family: **the alias of `this` (or a setter pointer) lands in a
different callee-saved register**, e.g. target `MOV R14,[0x230+RAX]` vs candidate
`R13`, all other instructions identical.

- **It is a whole-TU effect, proven not hypothesized.** Instantiating the exact
  libstdc++ header template (`std::_Rb_tree<...>::lower_bound`, literally the
  original source, same container, same compiler, same flags) still yields ~55%:
  a systematic RAX<->RDX / R13<->R14 swap. GCC 3.4.6's local register allocator
  for these loops depends on cumulative pseudo-register numbering across the
  whole translation unit (`QTY_CMP_PRI` in `local-alloc.c`,
  `floor_log2(n_refs) * freq * size / (death - birth)`), not reproducible by
  isolating one function.
- **The greg dump confirms where the choice is made.** `-fdump-rtl-greg` shows
  the setter pointer takes r13 and the string address r14 by that priority.
  `REG_ALLOC_ORDER` is the natural order; nothing to tune there.
- **Measured at zero on the console sret bucket (55 targets, 97.87%), do not
  repay**: the 14 flag sets; 240 generated source forms on `0xa4d730` (all
  97.87%); 41 off-list flags (`-frename-registers`, `-fweb`, `-fno-caller-saves`,
  `-fno-cprop-registers`, `-ftracer`, `-mtune=*`); 240-600s of the permuter. The
  only manipulation that flips the register also moves `self` and costs 10
  points. No corrected sibling exists to copy: of 1741 recovered
  `executeObjectMethod`, none call through a callee-saved register.
- **What would solve it** is one more quantity in the set branch with a shorter
  live range than the setter pointer, taking r13 before it without emitting an
  instruction. Nothing tried produces that. This single lever is worth ~70
  functions and is the best open problem in the project.

When a plateau shows only a coherent register renaming on an otherwise
instruction-identical loop, it is this wall. Diagnose it (RTL greg), record the
verdict, move on. Do not re-test identically later.

---

## 5. Block and branch order

- **`if (x==K){...return;}` chain whose blocks exit in the wrong order: write a
  `switch`.** GCC emits cases in source order where it reorders the `if` chain.
  `Spring::handleMessage` 71.4% -> 100% by this change alone, semantics
  untouched.
- **`__builtin_expect` moves block frequencies.** `__builtin_expect(mgr != 0, 1)`
  on a guard test puts the default block where the target has it. Not a rule: it
  is one spelling among several, keep the best of with/without. Measured 84.78%
  -> 100% on two console guards; the reverse on another family. The
  external-polarity level of a getter+setter form is controllable this way
  (75.86% -> 89.32%); a nested second polarity is not (GCC if-converts short
  blocks to CMOV independent of the hint).
- **Compute both function pointers before calling either.** A target that
  resolves an object vtable slot AND a factory singleton up front, then calls,
  will not match a resolve-call-resolve-call translation of the Ghidra
  pseudocode. `AIObject::createInformationPlugIn` family cracked 100% this way.
- **CMOV/SETNE fusion is a wall, not a source lever.** When the target fuses two
  return paths by reusing a zeroed register for a shared `SETNE`
  (`isObjectActive` 73-of-many twins), no reasonable source restructuring
  reproduces it. Ternary vs if-statement measured flat. Record and move on.

---

## 6. Crossjumping: a whole extra return block

Largest single cluster once seen: **76 addresses, all
`std::_Rb_tree<...>::insert_unique(value_type const&)`, stuck at 89-91%**, plus
18 more at 96% with the same sign. Residue is an entire extra return block
(~15 instructions, epilogue included) on the candidate side. `insert_unique` has
two `return pair(_M_insert(...), true)`: the real build merged the two tails,
ours did not, because `-fno-crossjumping` is pinned and the inverse was never on
the axis.

| address | base | `-fcrossjumping` |
|---|---:|---:|
| 0x4bb4b0 | 91.62 | **100.00** |
| 0x434400 | 89.05 | **100.00** |
| 0x40afc0 | 75.80 | **100.00** (with `-fno-strict-aliasing`) |

`-fcrossjumping`, alone and paired with `-fno-strict-aliasing`, belongs on the
swept flag axis. Re-sweep the stored near-misses after any change to that axis.

---

## 7. `std::string` (COW under GCC 3.4/4.0)

The binary's `std::string` is COW (a single pointer), not SSO. The recovered
corpus is almost all accessors with no locals, so it had **no example of a
destroyed local `std::string`** - mine harder and you still will not find it, it
must be written as a standalone example (see `donors/`).

### Local string, construct + destroy

```cpp
void C::setX(std::string name) {
    m_field.assign(name);            // string field at the offset in LEA RDI,[RDI+off]
    std::string tmp(name.c_str());   // local destroyed at end of scope
    m_flag = 0;                      // offset in MOV dword ptr [R12+off],0x0
}
```

The `CMP RBX,0xf6c6d0` (or `0xf6c6d0` / `0x408368` / `0x407bb8`) in the diff is
the COW test against `_S_empty_rep_storage`, not a null check. Verified family:
`VehicleHudCompTemplate::set*Icon` 100% under 4.0.3, ~200 functions unblocked.

### The dispose sequence

The end-of-scope dispose is filed under a **brace**: GCC 4.0 under the closing,
GCC 3.4 under the opening. The corpus miner drops brace lines, which is why the
most-requested idiom of the remaining corpus was unfindable even inside a
function that contains it. Indexing it means indexing each contiguous run piece
(lengths 2-8), because a whole-run hash needs an exact length match.

### Stack-slot order: temporary, not a named local

Two sibling blocks share their slots under GCC 3.4 (named locals and temporaries
alike); **only overlapping lifetimes give two distinct slots**. A named local is
created at block entry, a temporary when its expression is developed, and that
offset is what swaps two slots.

- **Two string copies whose slots are swapped**: write the second as a passed
  temporary, `f(p, std::string(a))` not `std::string b(a); f(p, b);`. Measured
  88.61% -> 97.47% and 88.30% -> 97.87%.
- **GCC builds arguments right to left**: the string constructed FIRST is the
  LAST argument. Emit any two-string call in reverse construction order.
- The dispose-hoisted form (sentinel in a register, pointer on the stack) is
  what a function with enough live strings produces; an example that never writes
  more than three locals never emits it (`donors/string_dispose_hoisted.cpp`
  closes it, 248 functions).

---

## 8. STL members: instantiate, do not write

**1566 remaining symbols demangle to `std::something<...>::method(...)`.** Those
are template instantiations; the body is in the compiler's headers. The
candidate is a declaration of the template arguments and one line:

```cpp
#include <set>
template class std::_Rb_tree<int, int, std::_Identity<int>,
                             std::less<int>, std::allocator<int> >;
```

Five lines score 100% on seven of eight functions of that instantiation; writing
one by hand gave 57.1% (the compiler knows the code, we do not). The only work
is declaring the non-`std::` names, and there are exactly three cases:

- **Pointer everywhere** (`Foo*`): a forward declaration suffices, the element
  is one word.
- **The comparator** (4th arg of `_Rb_tree`, 3rd of `map`, 2nd of `set`): never
  forward-declarable, held by value, but empty, so
  `struct X { bool operator()(K const&, K const&) const; };` reproduces the
  layout (`_M_key_compare` is 8 bytes either way). `NoCaseStringCompare` carries
  25 functions alone.
- **By value, something else** (a struct held by value): size AND destructor
  matter, the symbol says neither. Skip rather than guess; `--by-value` forces
  the try.

Node layout: `_Rb_tree_node_base` is 0x20, so `[node+0x28]` is an 8-byte key
(`std::string`, a pointer, a padded int), `[node+0x30]` a 16-byte key. Empty
comparator is a member not a base (no EBO), so it takes 8 bytes: `_M_header` is
at `map+8` and a `std::map` is 0x30.

### A comparator can have a BODY

13 `_Rb_tree<..., NoCaseStringCompare, ...>` at 91.84%, residue four lines: the
bodyless functor emits a call + a `bool` test, but the real comparator was
**inline** over a C string compare (`strcasecmp(a.c_str(), b.c_str()) < 0`,
tested as an `int < 0`). Give it the body: 91.84% -> 100%. The callee normalizes
to `<ADDR>`, so what is pinned is the shape (two `c_str()`, an `int`, a `< 0`
test), not the name.

### STL is exhausted at the current corpus / header

An automated pass over all the remaining instantiations: **0 of 635**. The easy
ones (1094 + 28) were the explicit-instantiation wins. The rest does not fall,
and the reason reads on the `std::fill<T*,...>` pocket: the explicit
instantiation is two instructions over (a loop rotation), the hand loop two
instructions wrong. Seven loop spellings and 22 flags measured flat. **It is a
header question, not a spelling one**: the only path is the exact libstdc++
version of the original build. Do not repay the search; a 0 here is not a broken
tool.

---

## 9. Destructors

D0/D1/D2 share a layout, so a resolved class is worth ~2.5 functions. The body a
destructor emits is empty, so a generator can only be right where every target
instruction is something the compiler emits from the class shape; the rest is
blocked until the next rule is found.

### `std::string` member declared `void*` costs the whole dispose

216 of 306 remaining destructors destroy at least one COW `std::string` member;
in COW it is one pointer, so naming it moves no other member. Detect: a load of
`[this+off]` whose next ~12 instructions name `0xf6c6d0`, `0x408368` or
`0x407bb8`. The 60-smallest sweep went from 35% best to 96.4/96.3/96.3/94.3%.

### Shape rules, each worth points across the family

- **A member at offset 0 reads with no displacement.** `MOV RBX,[RBP]` is member
  0, not "no member". And only accesses through a register PROVEN to alias `this`
  (`MOV reg,RDI`) count, else `[ptr+0x10]` becomes a phantom third member.
- **`this` stops being `this` the moment the register is written.** Alias
  analysis must be flow-sensitive: `delete m` reloads RDI from the member, and
  every CALL clobbers RDI. Reading RDI as `this` afterwards turns a `delete`'s
  `MOV RAX,[RDI]` into member 0.
- **The out-of-line called base is the one the pointer names.** `MOV RDI,<this>`
  = base at 0; `LEA RDI,[<this>+0x10]` = base at 0x10. When the call gets `this`
  unadjusted, all slots are in that base.
- **A base the target does not destroy has no destructor at all.**
  `virtual ~Base(){}` re-stores its vptr after members, two instructions the
  target never emits (97.5% with, 100% without). Carry the vptr with any virtual
  method (`virtual void f0();`, never defined - scoring reads emitted symbols,
  not linkage).
- **`delete <pointer member>` is a shape, not a body**: `MOV RDI,[this+off] /
  TEST / JZ / CALL <operator delete>` (or `MOV RAX,[RDI] / CALL [RAX+0x8]` when
  the member class has a virtual dtor). Declare the member `Pod*`/`Poly*`, write
  `delete m_off;` in load order (explicit statements run before any member/base
  destruction, source order).
- **`delete` virtual slot is 0x8 only if the dtor is the first virtual member**;
  `[RAX+0x10]` means a virtual declared before it.
- **A member returned to a global singleton is a body instruction**:
  `TEST RSI,RSI / JZ / MOV RDI,[<abs>] / MOV RAX,[RDI] / CALL [RAX+slot]` (33
  destructors).
- **A `NOP` in the dispose block is 4.0 alignment padding**, not a mismatch: one
  NOP between `TEST EAX,EAX` and its `JG` broke the 9-instruction sequence match
  for 11 destructors.

### Container members (`std::list` / `std::map` / `std::vector`)

The container is declared, not written. Read the member from the ASM:

| What you see | What it is |
|---|---|
| `CALL/JMP _List_base<...>::_M_clear`, `RDI = this+K` | `std::list` member at K |
| `CALL 0x407ef8` (`_Rb_tree_increment`) + `_Rb_tree<...>::_M_erase`, `RDI=this+K` | `std::map`/`std::set` member at K |
| `LEA <r>,[this+K+8]` compared to iterator | `&_M_header`, the end sentinel |
| `MOV RAX,[this+K+0x18]` at loop entry | `_M_header._M_left`, i.e. `begin()` |

Body inventory is small: `delete i->second` (virtual or not), `free(i->x)`,
explicit `clear()` then implicit member dtor, a member iterator stored in the
object. **Loop rotation is a source lever, not a flag** (15 flag sets measured
flat): `for (It i=m.begin(); i!=m.end(); ++i)` vs the guarded
`It i=m.begin(); if (i!=m.end()){ do {...++i;} while(i!=m.end()); }`. `MMCell`
92.7% -> 100% just switching the two; `AnimationManager` the reverse. Try both,
two compiles, beats a permuter measured flat.

### Negative results, do not repay

- **Intrusive refcount** (`MOV EAX,[RDI]/DEC/TEST/MOV [RDI],EAX/JZ`) is NOT
  `if (p && --p->rc==0) delete p;` - the three spellings give 56.67% where an
  empty body gives 72.00%. Shape recognizable, body not yet.
- **Per-dispose allocator slots**: five `*CompTemplate` dtors plateau 81-83%
  because the target gives each dispose its own allocator byte where the
  candidate shares one. Strings in a base, one base per string, non-virtual
  dtor, explicit body - all measured flat.

---

## 10. Small functions: compose, do not translate

Once both ends of a call are typed (from the mangled names), a class of
function stops being a translation and becomes a form:

```cpp
std::string BanList::consoleBanPlayerKey(const std::string& key) {
    return consoleBanPlayerKey(key, std::string(""));   // overload passing a default
}
```

Four `BanList` functions byte-match on first compile this way. The return type is
NOT in the mangled name (Itanium ABI omits it outside templates): it is looked
up, and it is what failed the first tries (`void` vs `std::string`).

Small functions crack fast by hand once the signature and constants are read
from the image: `CALL 0x407af8` is `abort@plt` (an assert
branch, not work); `UCOMISS XMM0,[0xb34b58]` says nothing until `0xb34b58` reads
`0.2f`. What was expensive was never writing the four lines, it was guessing the
signature, the constants and the callee name.

Negative result: on the 1193 remaining functions of <=60 instructions, the
"transfer to the single callee" form matched only 4, none between 80 and 99%. A
small one-call function is almost never a transfer; the call is `abort@plt`.

### Float comparisons: two spellings, one right

- `if (a < K) a = K;` alone compiles to `MAXSS`, no branch. If the target
  branches (`UCOMISS`/`JB`/`JP`), it is an `if...else if` chain, write `!(a>=K)`.
- `MAXSS XMM0,mem` operand order reads in the ASM: constant in XMM0 wants
  `(K<v)?v:K`, the reverse wants `(v<K)?K:v`.
- **Off by one `XORPS XMM0,XMM0` before `CVTSI2SS`** on bool-to-float
  properties: 94-98% and stuck; 15 flags + `-mtune=k8/pentium4/athlon` all flat.
  `-mpreferred-stack-boundary` does not exist below 4 on x86-64.
- **A value that round-trips through the stack into an XMM register is a `float`
  parameter**: GCC 3.4 has no direct GPR->XMM move, it spills and reloads
  `MOVSS`. An `int` parameter emits neither. Twenty points per overload that
  contains a float.

---

## 11. The console family (`executeObjectMethod`) - a form, not a family to sweep

1769 recovered give only 338 distinct shapes; the easy ones are harvested. All
clone paths are exhausted (2 twins on whole function, 6 on opcode sequence, 3 on
full block coverage). What differs between two members is written in the target
instructions, so the candidate is **generated**, and each line below was learned
by getting it wrong first.

| Target does | Write | Measured |
|---|---|---|
| several 32-bit `MOV` to `this+0x10c` | word by word `unsigned`, never `*(P*)a=*(P*)b` | 90.9% vs 62.5% struct copy |
| `MOV EDX,0x1ac` + `CALL memcpy` | local `char tmp[0x1ac]`, memcpy both ways | 4 at 100% |
| string ctor then one call | explicit local copy, call by const reference | 100%; by value 77.2% |
| `MOV RSI,[RDI+8]/CMP RSI,[RDI+0x10]/MOV [RSI],reg/ADD RSI,4` | `((std::vector<int>*)(t+off))->push_back(x)` | 100% |
| `MOV ESI,[CID]` before `MOV byte[..+0x108],0` | hoist CID/IID to named vars before the flag store | 96.97% -> 100% |
| `SUB RSP,0x10` vs candidate `0x18` | callee defined in-file, `noinline` | 84.6% -> 100% |
| `LEA RDX,[this+0x10c]` then `MOV RAX,RDX` at getter end | `return (long)out;`, and declare `out` INTERLEAVED between the member loads | 87.9 -> 100% |

The last two are the least obvious and most valuable.

- **Getter output pointer** (last row): the target keeps the out pointer in its
  own register and copies to RAX at return; the candidate puts the address
  straight in RAX. Both changes together, and only together: `return (long)out`
  not `p + 0x10c`, and declare `out` in the middle of the member loads (put the
  `out = ...` line in the middle of the member loads). The
  hidden-pointer sret form does NOT fall to this (target keeps two stack slots,
  GCC allocates one).
- **Stack padding** (`SUB RSP,0x10` vs `0x18`): 8 bytes GCC adds to align RSP to
  16 at the `CALL`, and omits when it knows the callee. When the target calls a
  file-local function, declare it `noinline` and empty. Only for a local call;
  through the PLT the padding stays.

Reading levers for the parser, each a real form:

- **A string getter has two non-interchangeable spellings.** A real virtual
  `std::string get()` passes a hidden pointer (`&tmp` in RDI, object in RSI); a
  function-pointer cast returning `const std::string&` does not. Both exist. Add
  the second: 8/20 -> 20/20 on that group.
- **GCC hoists the vtable slot above the string copy before the call**
  (`MOV R14,[RAX+0x230]`...`CALL R14`). A detector that only knows
  `CALL qword ptr [RAX+K]` sees no virtual call exactly on the string-property
  members. Handling it: 0 -> 81 targets.
- Output not always at `0x10c` (a bool is at `0x10a`); the get-branch epilogue is
  part of the branch body and must be stripped before the model.
- **The guarded property, set-branch open order**: read is a `char` load, flag
  write a `char` store; strict aliasing forbids swapping them, and which goes
  second decides if `this` is still live. Best spelling: pointer, narrow read,
  flag, late widening (declare the setter taking the widened value). 80.00 ->
  89.13 -> 96.77.
- **The guarded property, duplicated tail**: `-fno-crossjumping` is pinned, so
  the source decides. `if (mgr==0) goto def;` with `ss=0` written before the
  second test keeps a copy each side.
- Method dispatcher is a separate form from the property dispatcher: it compares
  the selector to a per-overload constant (`CMP EAX,4;JZ`); the property one
  tests against zero and decrements. Read a record argument word by word as
  `unsigned`, pass it by const reference; follow `this` into the callee-saved
  register the prologue parks it in, not just RDI.

---

## 12. Call-stream functions (`Module::init`) - the source is the call list

Reading a big function as one repeated record is wrong for
an init function where **every instruction is a call, an argument setup, or the
COW dispose test of a temporary `std::string` the call just consumed.** Nothing
is computed, so the source IS the call list, read from the target.

`io::ModuleIO::init` (0x853a50, 16 529 bytes, 149 statements) and
`world::Module::init` (0xaa39c0) match 100% first compile under GCC 4.0. Rules
(same as section 7): build arguments right-to-left (first-constructed string is
last argument), use temporaries not named locals, prove `this` by the register.
Negative: sweep at `--min-ins 60` over 1200 open found only 2 targets. The form
is rare, they are the engine `Module::init`. No family behind it.

---

## 13. Big table-driven functions

The 22 remaining functions of >=1500 instructions are 11% of the volume, and
the four normal verbs assume you can write a whole function; here the score is
flat until the last line. **18 of 22 are unrolled tables**, a repeated record
whose members are >=0.70 similar (67 242 of 74 708 instructions). The four
without a record are the four that are really logic
(`ResponsePhysics::checkObjectVsObject`, `Heightmap::intersectRay`,
`ServerGameLogic::checkPlayerTriggers`, `console::Parser::handleCommand`) - low
similarity is a useful answer too, they will not fall by transcription.

What varies per record fits on a page: `getClassList` = 72 lines of three
constants (a vtable, a class-name literal, a type id from a global);
`PlayerStatsManager` = 175 lines of two literals. The template is the only
semantic hypothesis and it is five lines; the instantiations, shell, both
compilers and the flag axis are arithmetic and need no judgment.

- **100% on a slice is not 100% on the function**: register allocation and stack
  layout are chosen for the whole function. Slices prove the semantics (the
  expensive part); the codegen residue after is the flag axis, the permuter and
  the compiler's RTL dumps.
- **getClassList TU-padding is measured at ZERO**: 30 points (pad 0/20/60/150/400
  x `inline-unit-growth` 30..4000) yield three values (22.29 / 27.53 / 60.44),
  60.44 is the ceiling. No command-line lever remains; what is left is a source
  spelling that inlines `push_back` fully and the string dtor partially.
- **`parseParameters` (0x4d5680) is not a table**: a preamble building local
  containers then `JMP qword ptr [0xb39c38 + RAX*8]` on 73 entries. A big switch.

---

## 14. Where class layouts come from (and where they do not)

A recurring hope is that the shipped binaries carry their own type information.
They do not. Measured on the shipped binaries:

- `amd-64/bf2` says "with debug_info" to `file`, which is misleading: 4 compile
  units, all glibc CRT (`crti.S`, `crtn.S`), **zero struct or class**. No engine
  layout is in there.
- `libdice_py.so` carries 2,560 structs / 21,330 members, but they are the
  internals of the **embedded CPython interpreter** (`_typeobject`, `_frame`,
  `Objects/*.c`), not one `dice::` type.
- `ia-32/bf2`, `libaidll.so`: empty compile units, zero types.

So do not go looking for class layouts in `debug_info`. The real sources, in
order of authority:

1. **The mangled names**: 45k on the exe, they encode class, method and
   parameter types, plus typeinfo, vtables and base offsets. This is the richest
   layout source.
2. **Ghidra** structures recovered from access patterns, and the recovered
   corpus itself.
3. **The ia-32 twin**: the same source compiled for 32-bit. Field ORDER is identical between the two
   arches; only pointer width scales. Its field-access pattern is a second
   witness to the field order and count, beside Ghidra. It is an oracle of
   meaning, never of bytes, so use it to corroborate a layout, never to
   byte-match against.
