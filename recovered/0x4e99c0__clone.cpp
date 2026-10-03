// FUNCTION: BF2 0x4e99c0
namespace dice { namespace hfe {

typedef void (*vfn)(void*);
void fn_0x4e99e0(void* self) {
    void* p = *(void**)self;
    if (p) {
        void** vt = *(void***)p;
        ((vfn)vt[0x8/8])(p);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_StatusMonitor_dtor_StatusMonitor (0x4e99e0)
