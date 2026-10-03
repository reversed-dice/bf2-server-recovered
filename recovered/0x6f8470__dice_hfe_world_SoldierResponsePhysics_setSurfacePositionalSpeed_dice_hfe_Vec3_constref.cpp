// FUNCTION: BF2 0x6f8470
namespace dice { namespace hfe {
void fn_0x6f8470(void* self, void* src) {
    unsigned* d = (unsigned*)((char*)self + 0xcc);
    const unsigned* s = (const unsigned*)src;
    unsigned z = s[2], y = s[1], x = s[0];
    d[0] = x; d[1] = y; d[2] = z;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_setSurfacePositionalSpeed_dice_hfe_Vec3_constref
