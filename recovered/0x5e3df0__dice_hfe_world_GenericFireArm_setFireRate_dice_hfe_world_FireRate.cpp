// FUNCTION: BF2 0x5e3df0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1i)(void*, int);
void fn_0x5e3df0(void* self, int rate) {
    void* m = *(void**)((char*)self+0x290);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1i)vt[0x1c8/8])(m, rate);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setFireRate_dice_hfe_world_FireRate (0x5e3df0)
