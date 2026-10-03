// FUNCTION: BF2 0x749660
// fixPathDelimiters 0x749660 — sign-extend char + tail-call
namespace dice { namespace hfe {

extern void fix_delims(void* s, int c);

void fixPathDelimiters(void* s, char c) {
    fix_delims(s, (int)(signed char)c);
}

}}

// re-trigger validate 2026-08-06 20:38:25

// re-trigger validate 2026-08-07 00:30:11
