// FUNCTION: BF2 0x6395d0
extern "C" void base_dice_hfe_world_PhysicsNode_dtor_PhysicsNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6395d0(void* self) {
    *(void**)self = (void*)0xb847d0;
    base_dice_hfe_world_PhysicsNode_dtor_PhysicsNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_PhysicsSpring_dtor_PhysicsSpring (0x6395d0)
