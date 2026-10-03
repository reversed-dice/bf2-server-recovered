// FUNCTION: BF2 0x609ec0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn1i)(void*, int);
void fn_0x609ec0(void* self) {
    void* r = *(void**)((char*)self+0x28);
    if (!r) return;
    void** vt = *(void***)r;
    ((vfn1i)vt[0x68/8])(r, 2);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_reload_dice_hfe_world_ReloadState (0x609ec0)
