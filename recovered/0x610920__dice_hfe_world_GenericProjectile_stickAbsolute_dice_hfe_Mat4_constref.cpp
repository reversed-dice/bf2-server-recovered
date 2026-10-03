// FUNCTION: BF2 0x610920
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1p)(void*, void*);
void fn_0x610920(void* self, void* mat4) {
    void* m = *(void**)((char*)self+0x260);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1p)vt[0x70/8])(m, mat4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_stickAbsolute_dice_hfe_Mat4_constref (0x610920)
