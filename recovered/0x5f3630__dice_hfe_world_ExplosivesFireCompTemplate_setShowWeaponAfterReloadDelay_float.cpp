// FUNCTION: BF2 0x5f3630
namespace dice { namespace hfe { namespace world {
void set_0x5f3630(void* p, float v) {
    *(float*)((char*)p + 0xa0) = v;
    *(int*)((char*)p + 0xa4) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireCompTemplate_setShowWeaponAfterReloadDelay_float (0x5f3630)
