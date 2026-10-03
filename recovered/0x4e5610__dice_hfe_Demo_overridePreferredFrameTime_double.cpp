// FUNCTION: BF2 0x4e5610
namespace dice { namespace hfe {
extern unsigned char fn_4f1d70(void* r);
double overridePreferredFrameTime_0x4e5610(void* self, double v) {
    void* r = *(void**)((char*)self + 0x10);
    if (r && fn_4f1d70(r)) {
        void* g = *(void**)0x010c5420;
        ((void (*)(void*, int))(*(void***)g)[0x39])(g, 0x64);
        return 0x3fa1111111111111;
    }
    return v;
}
} }
