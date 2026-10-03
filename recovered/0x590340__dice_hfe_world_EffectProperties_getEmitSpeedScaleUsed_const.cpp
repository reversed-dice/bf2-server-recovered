// FUNCTION: BF2 0x590340
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn_used)(void*, int);
bool fn_0x590340(void* self) {
    void** vt = *(void***)self;
    return ((vfn_used)vt[0x348/8])(self, 2);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getEmitSpeedScaleUsed_const (0x590340)
