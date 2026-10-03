// FUNCTION: BF2 0x590460
namespace dice { namespace hfe { namespace world {
typedef bool (*vfn_used)(void*, int);
bool fn_0x590460(void* self) {
    void** vt = *(void***)self;
    return ((vfn_used)vt[0x348/8])(self, 3);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getAgeScaleFactorUsed_const (0x590460)
