// FUNCTION: BF2 0x453aa0
namespace dice { namespace hfe {
// 0x453aa0 simulatePlayerPhysics
extern "C" void fn_43ae70(float, void*, bool);
typedef char (*vfn0c)(void*);
typedef void* (*vfn0p)(void*);
long simulatePlayerPhysics_0x453aa0(float f, void* player, void* p) {
    if (p != 0) {
        char c = ((vfn0c*)*(void***)p)[0x2a0/8](p);
        if (c != 0) {
            void* obj = ((vfn0p*)*(void***)p)[0x90/8](p);
            if (obj != 0) {
                fn_43ae70(f, obj, 0);
                return 1;
            }
        }
    }
    return 1;
}
} }
