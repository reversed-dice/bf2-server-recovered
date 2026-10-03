// FUNCTION: BF2 0x7496a0
// fixPath 0x7496a0 — sign-extend char + tail-call
namespace dice { namespace hfe {

extern void fixpath_fn(void* s, int c);

void fixPath(void* s, char c) {
    fixpath_fn(s, (int)(signed char)c);
}

}}
