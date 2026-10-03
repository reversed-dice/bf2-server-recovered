// FUNCTION: BF2 0x4e99c0
namespace dice { namespace hfe {

typedef void (*vfn0)(void*);
void fn_0x4e99c0(void* self) {
    void* r = *(void**)self;
    if (r) {
        void** vt = *(void***)r;
        ((vfn0)vt[1])(r);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_StatusMonitor_dtor_StatusMonitor (0x4e99c0)
