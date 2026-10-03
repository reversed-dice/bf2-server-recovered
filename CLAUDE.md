# bf2-server-recovered

Conventions for anyone, human or coding agent, who reads or edits this tree.

- One file per function: `recovered/0x<address>__<symbol>.cpp`. An address has
  exactly one file.
- The first line is `// FUNCTION: BF2 0x<address>`. Compiler flags beyond the
  defaults go in a `// BF2_FLAGS:` comment line.
- C++ only. No inline assembly, no `#include "..."`, no `#pragma`. A match
  reached through an absurd cast, a pinned register, or a faked `naked` or
  `noreturn` is not a match: find a plain C++ spelling.
- A file is accepted only if its source, compiled with the flags it declares by
  GCC 3.4.6 or 4.0.3, reproduces the original instructions exactly. See
  [docs/measurement.md](docs/measurement.md).
- Read [PROJECT_CONTEXT.md](PROJECT_CONTEXT.md) for the goal and the invariants,
  and [docs/matching-cookbook.md](docs/matching-cookbook.md) before rewriting a
  near-miss.
- Commit messages follow Conventional Commits. No emoji, no em-dash.
