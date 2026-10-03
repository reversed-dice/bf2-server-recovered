// FUNCTION: BF2 0x6d69a0
extern "C" void base_dice_hfe_world_IPhysicsSystem_dtor_IPhysicsSystem(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6d69a0(void* self) {
    *(void**)self = (void*)0xb93cd0;
    base_dice_hfe_world_IPhysicsSystem_dtor_IPhysicsSystem(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_BasicPhysicsSystem_dtor_BasicPhysicsSystem (0x6d69a0)
