// FUNCTION: BF2 0x7496f0
// getFixPathDelimiters 0x749670 — string + char sign-extend
namespace dice { namespace hfe {

extern void fixpathd_fn(void* out, void* in, int c);

void* getFixPathDelimiters(void* out, void* in, char c) {
    fixpathd_fn(out, in, (int)(signed char)c);
    return out;
}

}}
