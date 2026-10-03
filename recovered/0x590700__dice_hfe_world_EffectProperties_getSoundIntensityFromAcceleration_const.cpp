// FUNCTION: BF2 0x590700
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_from)(void*, void*, int, int);
void* fn_0x590700(void* retSlot, void* cfg) {
    void** vt = *(void***)cfg;
    ((vfn_from)vt[0x358/8])(retSlot, cfg, 5, 2);
    return retSlot;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getSoundIntensityFromAcceleration_const (0x590700)
