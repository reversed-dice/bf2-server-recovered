// FUNCTION: BF2 0x638530
namespace dice { namespace hfe {
void fn_0x638530(void* self, void* src) {
    unsigned* d = (unsigned*)((char*)self + 0x250);
    const unsigned* s = (const unsigned*)src;
    unsigned z = s[2], y = s[1], x = s[0];
    d[0] = x; d[1] = y; d[2] = z;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsSpring_setRelationToParentPosition_dice_hfe_Vec3_constref
