# bf2-server-recovered

- Never push, never open a pull request here. Read the corpus; submit with
  `dice submit FILE...` or the MCP tool `submit` (reversed-dice API).
- One file per function: `recovered/0x<addr>__<symbol>.cpp`, first line
  `// FUNCTION: BF2 0x<addr>`, flags in a `// BF2_FLAGS:` line.
- C++ only: no inline assembly, no `#include "..."`, no `#pragma`.
- `validate` (the judge) byte-matches each changed file with the flags it
  declares; the API merges on it.
- Commits carry `Submitted-by` / `Submitted-with` / `Submission-Id`, written
  by the API. No other trailer.
