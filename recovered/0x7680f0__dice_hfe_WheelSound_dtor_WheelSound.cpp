// FUNCTION: BF2 0x7680f0
namespace dice { namespace hfe {

typedef void (*vfn0)(void*);
extern "C" void _ZdlPv(void*);
void fn_0x7680f0(void* self) {
    void* p = *(void**)self;
    if (p) {
        void** vt = *(void***)p;
        ((vfn0)vt[8/8])(p);
    }
    void* m = *(void**)((char*)self+0x10);
    _ZdlPv(m);
}

} }
// REVERSED_FUNCTION: dice_hfe_WheelSound_dtor_WheelSound (0x7680f0)
