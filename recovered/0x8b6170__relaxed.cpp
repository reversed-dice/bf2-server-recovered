// FUNCTION: BF2 0x8b6170
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x010ccb10;
extern "C" void* g_0x010cca00;
extern "C" void fn2_0x00756000(void*);
void fn_0x74f580() {
    char* v = (char*)g_0x010ccb10 - 0x18;
    g_0x010cca00 = (void*)0xc08ed0;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) {
        fn2_0x00756000(&g_0x010cca00);
        return;
    }
    if (release_0x408368(v + 0x10, -1) <= 0) {
        char tmp[1];
        destroy_0x407bb8(v, tmp);
    }
    fn2_0x00756000(&g_0x010cca00);
}
} }
// REVERSED_FUNCTION: __tcf_21 (0x74f580)
