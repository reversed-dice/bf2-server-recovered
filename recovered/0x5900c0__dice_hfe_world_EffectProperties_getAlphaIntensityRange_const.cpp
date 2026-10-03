// FUNCTION: BF2 0x5900c0
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn2i)(void*, void*, int);
void* fn_0x5900c0(void* retSlot, void* cfg) {
    void** vt = *(void***)cfg;
    ((vfn2i)vt[0x338/8])(retSlot, cfg, 0);
    return retSlot;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getAlphaIntensityRange_const (0x5900c0)
