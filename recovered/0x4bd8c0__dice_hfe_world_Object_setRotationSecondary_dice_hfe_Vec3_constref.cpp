// FUNCTION: BF2 0x4bd8c0
namespace dice { namespace hfe {
void fn_0x4bd8c0(void* self, void* src) {
    unsigned* d = (unsigned*)((char*)self + 0x16c);
    const unsigned* s = (const unsigned*)src;
    unsigned z = s[2], y = s[1], x = s[0];
    d[0] = x; d[1] = y; d[2] = z;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Object_setRotationSecondary_dice_hfe_Vec3_constref
