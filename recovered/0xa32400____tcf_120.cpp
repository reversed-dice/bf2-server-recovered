// FUNCTION: BF2 0xa32400
namespace dice { namespace hfe {
extern "C" int release_0x408368(void*, int);
extern "C" void destroy_0x407bb8(void*, void*);
extern "C" void* g_0x0111ac70;
extern "C" void* g_0x0111ab60;
extern "C" void fn2_0x00756000(void*);
void fn_0xa32400() {
    char* v = (char*)g_0x0111ac70 - 0x18;
    g_0x0111ab60 = (void*)0xc5aef0;
    if (__builtin_expect(v == (char*)0xf6c6d0, 1)) {
        fn2_0x00756000(&g_0x0111ab60);
        return;
    }
    if (release_0x408368(v + 0x10, -1) <= 0) {
        char tmp[1];
        destroy_0x407bb8(v, tmp);
    }
    fn2_0x00756000(&g_0x0111ab60);
}
} }
// REVERSED_FUNCTION: __tcf_120 (0xa32400)
