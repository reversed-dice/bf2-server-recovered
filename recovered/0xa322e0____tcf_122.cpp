// FUNCTION: BF2 0xa322e0
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x0111aa30;
extern "C" void* g_0x0111a920;
extern "C" void fn2_0x00756000(void*);
void fn_0xa322e0() {
    char* v = (char*)g_0x0111aa30 - 0x18;
    g_0x0111a920 = (void*)0xc5b270;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) {
        fn2_0x00756000(&g_0x0111a920);
        return;
    }
    if (release_0x408368(v + 0x10, -1) <= 0) {
        char tmp[1];
        destroy_0x407bb8(v, tmp);
    }
    fn2_0x00756000(&g_0x0111a920);
}
} }
// REVERSED_FUNCTION: __tcf_122 (0xa322e0)
