// FUNCTION: BF2 0x60ebb0
namespace dice { namespace hfe { namespace world {
void fn_0x60ebe0(void* self, float v) {
    *(float*)((char*)self+0x18) = v;
    if (v == 0.0f) { *(float*)((char*)self+0x24) = 0.0f; return; }
    *(float*)((char*)self+0x24) = *(float*)0xb7a0c4 / v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponBasedRecoilCompTemplate_setRecoilSpeedGB_float (0x60ebe0)
