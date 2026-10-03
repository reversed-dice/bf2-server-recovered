// FUNCTION: BF2 0x63fe30
namespace dice { namespace hfe {
void fn_0x63fe30(void* self, void* src) {
    unsigned* d = (unsigned*)((char*)self + 0xac);
    const unsigned* s = (const unsigned*)src;
    unsigned z = s[2], y = s[1], x = s[0];
    d[0] = x; d[1] = y; d[2] = z;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setSpecColor_dice_hfe_Vec3_constref
