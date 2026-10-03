// FUNCTION: BF2 0x5906a0
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn_used)(void*, int);
bool fn_0x5906a0(void* self) {
    void** vt = *(void***)self;
    return ((vfn_used)vt[0x348/8])(self, 5);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getSoundIntensityUsed_const (0x5906a0)
