// FUNCTION: BF2 0x6f8510
extern "C" void base_dice_hfe_world_IPhysicsNode_dtor_IPhysicsNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6f8510(void* self) {
    *(void**)self = (void*)0xb95e10;
    base_dice_hfe_world_IPhysicsNode_dtor_IPhysicsNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_dtor_StaticPhysicsNode (0x6f8510)
