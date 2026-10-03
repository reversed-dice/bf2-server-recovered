// FUNCTION: BF2 0x5e4160
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1p)(void*, void*);
void fn_0x5e4160(void* self, void* obj) {
    void* m = *(void**)((char*)self+0x290);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1p)vt[0x168/8])(m, obj);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_addProjectileReference_dice_hfe_world_IObjectptr (0x5e4160)
