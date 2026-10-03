// FUNCTION: BF2 0x7496b0
// getFixPath 0x7496b0 — string + char sign-extend
namespace dice { namespace hfe {

extern void fix_path(void* out, void* in, int c);

void* getFixPath(void* out, void* in, char c) {
    fix_path(out, in, (int)(signed char)c);
    return out;
}

}}

// re-trigger validate 2026-08-06 20:37:28

// re-trigger validate 2026-08-07 00:29:20
