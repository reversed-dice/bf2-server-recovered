// FUNCTION: BF2 0x7496f0
// extractFilePath 0x7496f0 — string + char sign-extend
namespace dice { namespace hfe {

extern void extract_fn(void* out, void* in, int c);

void* extractFilePath(void* out, void* in, char c) {
    extract_fn(out, in, (int)(signed char)c);
    return out;
}

}}

// re-trigger validate 2026-08-06 20:39:15

// re-trigger validate 2026-08-07 00:31:03
