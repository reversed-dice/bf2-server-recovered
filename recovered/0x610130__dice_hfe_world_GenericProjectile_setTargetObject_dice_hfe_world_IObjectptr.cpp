// FUNCTION: BF2 0x610130
namespace dice { namespace hfe { namespace world {
typedef void (*vfn2i)(void*, void*, int);
void fn_0x610130(void* self, void* obj) {
    void* m = *(void**)((char*)self+0x270);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn2i)vt[0x48/8])(m, obj, 1);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_setTargetObject_dice_hfe_world_IObjectptr (0x610130)
