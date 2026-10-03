// FUNCTION: BF2 0x637d70
namespace dice { namespace hfe {
void fn_0x637d70(void* self, void* src) {
    unsigned* d = (unsigned*)((char*)self + 0xe8);
    const unsigned* s = (const unsigned*)src;
    unsigned z = s[2], y = s[1], x = s[0];
    d[0] = x; d[1] = y; d[2] = z;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_setDragOffset_dice_hfe_Vec3_constref
