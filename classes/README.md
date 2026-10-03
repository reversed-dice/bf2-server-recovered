# classes/ — class reconstruction

The per-function pipeline in `recovered/` proves that a function's assembly can
be reproduced from C++. It does not produce readable code: 50,000 files, one
function each, no types, no classes. This directory is the other half. It
assembles a shared class header from the functions already recovered for that
class, cross-validated against the layout the binary itself states (vtables,
typeinfo, base offsets from `binmeta.db`).

A header is accepted when the recovered method sources still compile against
it. That rate is the only measure here, and it is gated: `bf2/classes/sweep.py`
fails on any drop.

## Layout

```
include/            the assembled headers, one per class
baselines.json      per-class compile-clean rate the sweep compares against
scratch/            assembler output (gitignored)

bf2/classes/        the tooling: assemble.py, sweep.py (gate regressions),
                    gate.py (header shape, run by ci.yml), layout.py, stub_builder.py
```

## Compile-clean rate

Number of recovered method files that compile against the shared header, over
the number tried. Baselines refreshed 2026-08-12, total 349/452.

| Class | Clean | Rate | Note |
|---|---|---|---|
| `Soldier` | 43/53 | 81% | the big hub |
| `GameLogic` | 64/93 | 69% | remainder: fields never observed elsewhere, left out on purpose |
| `ClientGameLogic` | 24/32 | 75% | includes `GameLogic.h` as its base |
| `Player` | 37/40 | 92% | |
| `GameServer` | 33/40 | 82% | carries the memory-verified `io::NetServer* m_netServer` at `+0xB0` |
| `FreeCamera` | 47/59 | 80% | |
| `ControlPointTemplate` | 36/45 | 80% | |
| `PlayerControlObjectTemplate` | 24/33 | 73% | |
| `RecoilComp` | 28/32 | 88% | |
| `VehicleHudCompTemplate` | 9/9 | 100% | |
| `GameEventMakerMaker` | 1/7 | 14% | mangled return types, naming debt specific to this class |
| `StaticPhysicsNode` | n/a | n/a | pure wrapper pattern, nothing to fail |
| `ArmorGLCompTemplate`, `ScoreManager` | 1/1, 2/2 | n/a | sample too small to mean anything |

## Running it

Everything runs from the repo. The assembler writes its scratch output to
`classes/scratch/` (gitignored) and the sweep reads it from there.

```sh
bf2 assemble dice_hfe_Player
bf2 sweep             # every class, against baselines.json
bf2 sweep --publish   # copy the headers into include/
bf2 gate              # the SHAPE of the published headers
```

`bf2/classes/gate.py` is the second gate and it answers a different question:
not "does this still compile" but "is this still source a person could
maintain". One class per file named after the file, every method under its
`// FUNCTION: BF2 0x...` annotation, addresses ascending, each address a real
symbol in the binary. It also reports two debt meters it does not enforce:
declared names that disagree with the binary, and how many of the class's
vtable slots the header actually declares. It needs no toolchain, so it runs
on every PR in `ci.yml`.

### The address annotation

Every method declaration in a published header carries the address it was
recovered from:

```cpp
  // FUNCTION: BF2 0x004a2980
  unsigned int getTracePlayerId() const;
```

`recovered/` keeps the link to the binary in the filename, which works for
byte-matching and produces 50,000 files that are not readable source. A class
file cannot keep it that way, so it states the address instead. This is the
same convention lemball-decomp uses (`// FUNCTION: LEMBALL 0x00408240`) and for
the same reason: it is what lets a real class file and a per-function corpus be
the same body of work.

## State of the assembler, 2026-09-12

**The sweep had never run against the current corpus.** It invoked the
assembler in the `~/bf2-reverse-proto` worktree, which is parked on the
`class-assembly-prototype` branch: 32,323 files in `recovered/` against main's
50,537. Every rate in `baselines.json` was therefore measured on a corpus
18,214 files short, and an edit to the in-repo copy of the assembler changed
nothing at all (its `REPO_ROOT` was a fixed `parents[1]`, so the in-repo copy
could not even resolve `recovered/`). The sweep now runs the in-repo assembler,
every path comes from `bf2.ROOT`, and there is one copy of the assembler.

On the stale corpus the current assembler was clean: 350/452, no regression,
`Soldier` +1. On the real corpus it needed two fixes, each of which took a
whole class to zero on its own:

| Defect | Effect |
|---|---|
| `std::ostream` and the other stream types were not in `_STD_HEADERS`, so a corroborated `std::ostream` member stayed an incomplete type | `Player` 0/90 -> **78/90** |
| one declaration whose parameter was the truncated qualified name `dice::` (the recovered FILENAME it was decoded from was cut at the filesystem's 255-byte limit) | `Soldier` 0/54 -> **44/54** |

Both are the same failure mode and it is worth stating on its own: **one
malformed declaration does not degrade a header, it zeroes it.** Every method
file includes the header, so a parse error in one line fails all of them.
`_is_unusable_sig` is the only place that can stop it.

## Where this came from

Until 2026-09-12 the headers lived in a separate repo,
`louisrno/bf2-class-reconstruction`, and were copied there by hand after each
sweep. The split meant the headers could never be checked against the
`recovered/` sources in the same commit. Merged here with its history; the old
repo is a read-only pointer.

Methodology, layout sources and their known failure modes:
`dev/projects/bf2-reverse/class-reconstruction.md` in the vault.
