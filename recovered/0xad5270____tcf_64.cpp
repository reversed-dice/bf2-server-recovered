// FUNCTION: BF2 0xad5270
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x0113e1f0;
extern "C" void* g_0x0113e0e0;
extern "C" void fn2_0x00756000(void*);
void fn_0xad5270() {
    char* v = (char*)g_0x0113e1f0 - 0x18;
    g_0x0113e0e0 = (void*)0xc89d50;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) {
        fn2_0x00756000(&g_0x0113e0e0);
        return;
    }
    if (release_0x408368(v + 0x10, -1) <= 0) {
        char tmp[1];
        destroy_0x407bb8(v, tmp);
    }
    fn2_0x00756000(&g_0x0113e0e0);
}
} }
// REVERSED_FUNCTION: __tcf_64 (0xad5270)
