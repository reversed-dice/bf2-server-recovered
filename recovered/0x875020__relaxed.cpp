// FUNCTION: BF2 0x875020
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x010c0ce8;
void fn_0x439ad0() {
    char* v = (char*)g_0x010c0ce8 - 0x18;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) return;
    if (release_0x408368(v + 0x10, -1) > 0) return;
    char tmp[1];
    destroy_0x407bb8(v, tmp);
}
} }
// REVERSED_FUNCTION: __tcf_1 (0x439ad0)
