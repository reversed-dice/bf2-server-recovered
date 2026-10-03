// FUNCTION: BF2 0x639650
namespace dice { namespace hfe { namespace world {

extern "C" void PhysicsNode_reset_bool(void*, bool);
void fn_0x639650(void* self, bool val) {
    PhysicsNode_reset_bool(self, val);
    *(int*)((char*)self+0x248) = -1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsWing_reset_bool (0x639650)
