// FUNCTION: BF2 0x872ec0
// CAM_acc_active 0x872ec0 — deref global conditionnel
namespace dice { namespace hfe {

void* cam_acc_active() {
    void* p = *(void**)0x108d650;
    if (p)
        return *(void**)p;
    return 0;
}

}}

// re-trigger validate 2026-08-06 20:37:21

// re-trigger validate 2026-08-07 00:29:12
