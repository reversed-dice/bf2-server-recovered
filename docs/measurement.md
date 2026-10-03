# Measurement policy

One source of truth for progress, one explicit scoring rule, and one invariant:
**the number does not move without an explanation.** A tooling change that moves
the number without one is treated as a scorer regression, not progress.

## Two numbers, one honest

- **Functions matched: 40,569 / 44,153 (91.88%).** Inflated by tiny accessors; a
  3-instruction accessor counts as much as `Soldier::handlePlayerInput`
  (5,654 bytes).
- **Code bytes matched: 58.93%** (fuzzy 66.04%). This is the reference number.
  It weights each function by size, so it says where the remaining work is:
  `OldConsole`, `Soldier`, `GameServer`, `ResponsePhysics`, `BF2Engine`.

Always cite the byte number as real progress; the function number only beside
it, never alone.

## The denominator: 44,153

Fixed target (`regen_namespace_table.TOTAL_TARGET`). Source: the `functions`
table of `ghidra_cache.db`, filtered by `categorize()` (Ghidra names carrying a
`dice_...` namespace), plus an explicit residual unit of ~5,264 in-scope
functions with no namespace, totalling 44,153. Out-of-scope recoveries (compiler
helpers, embedded third party) are counted in `metadata` and left out of the
measures.

**STUB exclusion.** A recovered file may carry `// STUB: <reason>` for CRT /
compiler glue (`_init`, `_fini`, PLT thunks). `bf2/report/report.py` then removes that
address from the numerator AND the denominator, and the target shrinks by that
much, so each named stub is one fewer function in scope and the residue stays
honest. No stub is marked to date, so the number is unchanged - this is the
mechanism, not an applied correction.

## The byte mask in the scoring path

The score is not a `memcmp`. Some bytes are **unknowable by construction** and
are not divergence: an absolute address, a relocation target, an immediate that
carries a relocation. `normalize.normalize_objdump()` masks them to `<ADDR>`
before the diff, on both sides. What is masked, and why:

- **Unresolved relocations in a `.o`**: a global appears as `mov eax,0x0` with an
  `R_X86_64_32` reloc where Ghidra shows `MOV EAX,<ADDR>`. The `0x0` is a slot,
  not an immediate. **Hence the `objdump -r` gotcha**: without `-r` the reference
  stays `0x0` instead of `<ADDR>` and the candidate scores under its value.
  Correct command everywhere: `objdump -d -r -M intel -j .text <obj>`.
- **`CALL`/`Jcc`/`JMP` targets** to an external label, and `[RIP+0x0]` references
  of unresolved globals, normalized to `<ADDR>` / `[<ADDR>]`.
- **Sign-extended immediates** GCC prints as unsigned hex: normalized so the same
  value written two ways does not diverge.

A mask that hides a **really emitted** byte biases the score up; a missing mask
(the forgotten `-r`) biases it down. Both errors read as a broken candidate, not
a broken tool.

## Two scoring rules that do not re-derive

- **Per emitted SYMBOL, not per whole object.** A destructor `.o` carries D0, D1,
  D2 as separate symbols with near-identical bodies. Scoring the target against
  all three concatenated triples the candidate's instruction list: 49.08% vs
  96.39% on `0x5a8340`. There is one local scorer, `bf2_score` (on top of
  `bf2_compile`), and it picks the best symbol (`bf2_score.pick`), guarded by
  `tests/test_scorer_agreement.py`.
- **Every section, not just `.text`.** GCC 3.4 puts thunks, templates and inline
  members in `.gnu.linkonce.t.*`; `objdump -j .text` scored them 18% where they
  are 100% (the old `bf2_scorelib` did, so the permuter and the MCP `score` tool
  under-read that family until 2026-09-28).
- **No new scoring path.** Compile through `bf2_compile` (`emitted` for a score,
  `compile_dump` for a line-annotated listing); `tests/test_scoring_and_permute.py`
  fails on any other script that runs objdump on a candidate.

## One source: report.json

`bf2/report/report.py` writes `report.json` (objdiff report v2, the format melee,
lemball-decomp and decomp.dev exchange). Never recompute progress otherwise:

- `bf2/report/namespace_table.py` writes the README Progress line and namespace table;
- `bf2/report/report.py` writes the byte table and `report.json`;
- the console and `bf2/report/treemap.py` (`docs/progress.svg`) READ `report.json`.

Three consumers agree because there is only one.

## The invariant

**58.93% of bytes, 91.88% of functions, as of 2026-09-13.** Any change to the
scoring path (`bf2/core/normalize.py`, `bf2/core/diff.py`, `bf2/core/score.py`, `bf2/core/compile.py`) or the
report (`bf2/report/report.py`, the STUBs, the mask) must re-measure before/after. A
gap of more than 2 points on the byte number must be EXPLAINED (which rule
changed, why the new number is more correct) before publishing the new report.

## Pointers

- `bf2/core/normalize.py::normalize_objdump` - the mask.
- `bf2/report/report.py` - the denominator, STUB exclusion, report.json.
- `bf2/report/namespace_table.py` - `TOTAL_TARGET`, the README line.
- [matching-cookbook.md](matching-cookbook.md) - the register-allocation wall and
  the compiler-form levers behind the remaining byte residue.
