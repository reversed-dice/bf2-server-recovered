# bf2-server-recovered

C++ source of the Battlefield 2 Linux dedicated server (`bf2_l64.x86`),
recovered function by function until it recompiles byte for byte with the
period compilers (GCC 3.4.6 and 4.0.3).

This is a matching decompilation: a function counts as recovered only when its
source, compiled with the flags it declares, produces exactly the instructions
of the original binary. "Looks right" is not enough.

## Layout

| Path | Content |
|---|---|
| `recovered/` | One file per function, `0x<address>__<symbol>.cpp` |
| `donors/` | Small standalone examples of compiler idioms |
| `docs/` | Matching knowledge: [measurement](docs/measurement.md), [cookbook](docs/matching-cookbook.md) |
| `PROJECT_CONTEXT.md` | Goal, definition of the corpus, invariants |
| `CLAUDE.md` | Conventions for contributors and coding agents |
| `CONTRIBUTING.md` | How to contribute (not open yet) |

No game binary and no game asset is part of this repository.

## File format

```cpp
// FUNCTION: BF2 0x4676e0
// BF2_FLAGS: -fno-strict-aliasing
...
```

- The first line is `// FUNCTION: BF2 0x<address>`.
- Extra compiler flags, when needed, are declared in a `// BF2_FLAGS:` comment.
- C++ only: no inline assembly, no `#include "..."`, no `#pragma`.

## Contributing

Contributions are private for now, a public process is coming soon. See
[CONTRIBUTING.md](CONTRIBUTING.md).

## License

Released under the GNU General Public License v3.0, see [LICENSE](LICENSE).
