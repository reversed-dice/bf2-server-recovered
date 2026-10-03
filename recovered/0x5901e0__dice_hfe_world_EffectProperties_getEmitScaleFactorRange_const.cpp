// FUNCTION: BF2 0x5901e0
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_range)(void*, void*, int);
void* fn_0x5901e0(void* retSlot, void* cfg) {
    void** vt = *(void***)cfg;
    ((vfn_range)vt[0x338/8])(retSlot, cfg, 1);
    return retSlot;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getEmitScaleFactorRange_const (0x5901e0)
