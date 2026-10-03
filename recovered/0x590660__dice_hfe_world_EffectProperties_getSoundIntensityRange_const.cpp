// FUNCTION: BF2 0x590660
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_range)(void*, void*, int);
void* fn_0x590660(void* retSlot, void* cfg) {
    void** vt = *(void***)cfg;
    ((vfn_range)vt[0x338/8])(retSlot, cfg, 5);
    return retSlot;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getSoundIntensityRange_const (0x590660)
