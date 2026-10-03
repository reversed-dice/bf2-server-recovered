// FUNCTION: BF2 0x610ae0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1f)(void*, float);
void fn_0x610ae0(void* self, float depth) {
    void* m = *(void**)((char*)self+0x88);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1f)vt[0x210/8])(m, depth);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_setUnderWater_float (0x610ae0)
