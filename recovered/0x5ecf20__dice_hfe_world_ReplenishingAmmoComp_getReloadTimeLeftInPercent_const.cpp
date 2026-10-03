// FUNCTION: BF2 0x5ecf20
namespace dice { namespace hfe { namespace world {
typedef float (*vfn0f)(void*);
float fn_0x5ecf20(void* self) {
    void** vt = *(void***)self;
    return ((vfn0f)vt[0x1e8/8])(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_getReloadTimeLeftInPercent_const (0x5ecf20)
