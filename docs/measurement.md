# Measurement policy

One source of truth for progress, one explicit scoring rule, and one invariant:
**the number does not move without an explanation.** A tooling change that moves
the number without one is treated as a scorer regression, not as progress.

## Two numbers, one honest

- **Functions matched.** Inflated by tiny accessors: a 3-instruction accessor
  counts as much as a 5,000-byte function.
- **Code bytes matched.** This is the reference number. It weights each function
  by its size, so it says where the remaining work is.

Always cite the byte number as real progress; the function number only beside it,
never alone.

## The denominator: 44,153

The target is fixed: the functions of the binary that belong to the engine
namespaces, plus an explicit residual unit of in-scope functions that carry no
namespace. Out-of-scope code (compiler helpers, embedded third-party libraries)
is counted separately and left out of the measures.

**STUB exclusion.** A recovered file may carry `// STUB: <reason>` for CRT or
compiler glue (`_init`, `_fini`, PLT thunks). Such an address leaves both the
numerator and the denominator, so each named stub is one function fewer in scope
and the remainder stays honest.

## The byte mask in the scoring path

The score is not a `memcmp`. Some bytes are **unknowable by construction** and
are not divergence: an absolute address, a relocation target, an immediate that
carries a relocation. They are masked to `<ADDR>` before the comparison, on both
sides. What is masked, and why:

- **Unresolved relocations in an object file**: a global appears as
  `mov eax,0x0` with an `R_X86_64_32` relocation where the reference shows
  `MOV EAX,<ADDR>`. The `0x0` is a slot, not an immediate. **Hence the
  `objdump -r` gotcha**: without `-r` the reference stays `0x0` instead of
  `<ADDR>` and the candidate scores under its raw value. The correct command
  everywhere is `objdump -d -r -M intel -j .text <obj>`.
- **`CALL`, `Jcc` and `JMP` targets** to an external label, and `[RIP+0x0]`
  references to unresolved globals, normalized to `<ADDR>` and `[<ADDR>]`.
- **Sign-extended immediates** that GCC prints as unsigned hex, normalized so the
  same value written two ways does not diverge.

A mask that hides a **really emitted** byte biases the score up; a missing mask
(the forgotten `-r`) biases it down. Both errors read as a broken candidate, not
as a broken scorer.

## Two scoring rules that do not re-derive

- **Per emitted symbol, not per whole object.** A destructor object carries the
  D0, D1 and D2 symbols as separate functions with near-identical bodies.
  Scoring the target against all three concatenated triples the candidate's
  instruction list: 49.08% against 96.39% on one real destructor. Score each
  symbol and keep the best.
- **Every section, not just `.text`.** GCC 3.4 puts thunks, templates and inline
  members in `.gnu.linkonce.t.*`; scoring only `.text` rated those at 18% where
  they are 100%.
- **One scoring path.** Anything that disassembles a candidate must go through
  the same compile and normalization steps.

## The invariant

Any change to the compile, normalization or diff steps, or to the report format
(the stubs, the mask), must re-measure before and after. A gap of more than two
points on the byte number must be explained (which rule changed, why the new
number is more correct) before the new figure is published.

See [matching-cookbook.md](matching-cookbook.md) for the register-allocation wall
and the compiler-form levers behind the remaining byte residue.
