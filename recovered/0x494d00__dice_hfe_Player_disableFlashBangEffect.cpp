// FUNCTION: BF2 0x494d00
namespace dice { namespace hfe {
extern void fn_4d2350(void* a);
void disableFlashBangEffect_0x494d00(void* self) {
    void* mgr = *(void**)0x0112ee38;
    void* p = ((void* (*)(void*))(*(void***)mgr)[0xc])(mgr);
    if (self == p) {
        void* q = *(void**)0x010929e0;
        if (q)
            fn_4d2350(q);
    }
}
} }
