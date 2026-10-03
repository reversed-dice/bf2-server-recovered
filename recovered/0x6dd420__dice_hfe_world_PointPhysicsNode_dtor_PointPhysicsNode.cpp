// FUNCTION: BF2 0x6dd420
extern "C" void base_dice_hfe_world_StaticPhysicsNode_dtor_StaticPhysicsNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6dd420(void* self) {
    *(void**)self = (void*)0xb944b0;
    base_dice_hfe_world_StaticPhysicsNode_dtor_StaticPhysicsNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_dtor_PointPhysicsNode (0x6dd420)
