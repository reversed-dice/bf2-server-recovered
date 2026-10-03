// FUNCTION: BF2 0x590220
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn1i)(void*, int);
bool fn_0x590220(void* self) {
    void** vt = *(void***)self;
    return ((vfn1i)vt[0x348/8])(self, 1);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getEmitScaleFactorUsed_const (0x590220)
