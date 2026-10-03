// FUNCTION: BF2 0x592d40
namespace dice { namespace hfe { namespace world {

extern "C" bool dice_hfe_world_EffectProperties_effectPropertiesUsed_const(void*);
bool fn_0x592d40(void* self) {
    if (*(char*)((char*)self+0x3d8) != 0) return true;
    void* target = (char*)self + 0x1f8;
    return dice_hfe_world_EffectProperties_effectPropertiesUsed_const(target);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectBundleTemplate_physicsUsed_const (0x592d40)
