# Project context

What does not change: the goal, the definition of the corpus, and the rules that
hold from one change to the next.

## Goal

Reconstruct the C++ source of the Battlefield 2 Linux server (`bf2_l64.x86`)
function by function, so that **the source, recompiled with the compiler of the
time, comes out byte for byte identical to the binary**. This is a matching
decompilation, in the spirit of the console-game decompilation projects: the
proof of a function is not that it looks right, it is that it matches.

## The corpus

- **44,153 target functions.** The denominator is fixed. How it is composed and
  what is excluded is described in [docs/measurement.md](docs/measurement.md).
- **The reference binary mixes GCC 3.4.6 and GCC 4.0.3.** Some families only
  match under one of them, so never pin a compiler blindly: try both.

## How a function is proven

1. The C++ source is compiled with the project flags
   (`g++ -m64 -O2 -fno-exceptions -fno-rtti -c`) plus the flags the file
   declares, using GCC 3.4.6 or GCC 4.0.3.
2. The emitted code of the function's symbol is compared with the binary.
   Bytes that cannot be known by construction (absolute addresses, relocation
   targets) are masked on both sides. See [docs/measurement.md](docs/measurement.md).
3. A function is recovered only at 100%, and every file is re-verified
   independently before it is kept.

## Measurement

Progress is measured in bytes first, in functions second. A function count alone
is inflated by tiny accessors, so the byte figure is the reference. Any change to
the scoring rules must be measured before and after, and a gap of more than two
points on the byte figure must be explained.

## Rules

- No inline `asm()` in a recovered file, ever. Find a plain C++ spelling.
- One file per function, named after its address and symbol.
- Do not add anything that is not a function source, a donor example, or
  documentation.

## Structure

```
recovered/   one file per function, byte-matching
donors/      small standalone examples of compiler idioms
docs/        measurement policy and matching cookbook
```
