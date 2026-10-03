// FUNCTION: BF2 0x6ee460
extern "C" void base_dice_hfe_world_PointPhysicsNode_dtor_PointPhysicsNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6ee460(void* self) {
    *(void**)self = (void*)0xb94e70;
    base_dice_hfe_world_PointPhysicsNode_dtor_PointPhysicsNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_RotationalPointPhysicsNode_dtor_RotationalPointPhysicsNode (0x6ee460)
