// FUNCTION: BF2 0x610900
namespace dice { namespace hfe { namespace world {
typedef void (*vfn2p)(void*, void*, void*);
void fn_0x610900(void* self, void* obj, void* mat4) {
    void* m = *(void**)((char*)self+0x260);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn2p)vt[0x68/8])(m, obj, mat4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_stick_dice_hfe_world_IObjectptr_dice_hfe_Mat4_constref (0x610900)
