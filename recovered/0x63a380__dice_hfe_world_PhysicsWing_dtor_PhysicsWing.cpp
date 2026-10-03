// FUNCTION: BF2 0x63a380
extern "C" void base_dice_hfe_world_PhysicsNode_dtor_PhysicsNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_63a380(void* self) {
    *(void**)self = (void*)0xb84cd0;
    base_dice_hfe_world_PhysicsNode_dtor_PhysicsNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_PhysicsWing_dtor_PhysicsWing (0x63a380)
