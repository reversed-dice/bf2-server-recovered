// FUNCTION: BF2 0x609ee0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1i)(void*, int);
void fn_0x609ee0(void* self) {
    void* r = *(void**)((char*)self+0x28);
    if (!r) return;
    void** vt = *(void***)r;
    ((vfn1i)vt[0x68/8])(r, 8);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_postSwitchFireRate_dice_hfe_world_FireRate (0x609ee0)
