// FUNCTION: BF2 0xa33560
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x0111fe88;
void fn_0xa33560() {
    char* v = (char*)g_0x0111fe88 - 0x18;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) return;
    if (release_0x408368(v + 0x10, -1) > 0) return;
    char tmp[1];
    destroy_0x407bb8(v, tmp);
}
} }
// REVERSED_FUNCTION: __tcf_13 (0xa33560)
