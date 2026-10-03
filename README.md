# bf2-server-recovered

C++ source of the Battlefield 2 Linux server (`bf2_l64.x86`), recovered
function by function until it recompiles byte for byte with the period
compilers (GCC 3.4 and 4.0).

Progress: `dice status`, or `GET /api/v1/public/progress.json` on the API.

## Contributing

Nobody pushes here, not even by pull request: the reversed-dice API is the
only writer. Submit with the [`dice`](https://github.com/reversed-dice/dice)
CLI (`dice submit FILE...`) or the MCP tool `submit`; the API scores the
candidate, opens a pull request, and merges it once `validate` byte-matches
every file. Each commit names who submitted it (`Submitted-by`) and with
which AI (`Submitted-with`).

Corpus rules: see `PROJECT_CONTEXT.md` and `docs/matching-cookbook.md`.
