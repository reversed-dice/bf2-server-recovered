// FUNCTION: BF2 0x5ffee0
namespace dice { namespace hfe { namespace world {
void set_0x5ffee0(void* p, float v) {
    *(float*)((char*)p + 0xa8) = v;
    *(int*)((char*)p + 0xac) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireCompTemplate_setShowWeaponAfterReloadDelay_float (0x5ffee0)
