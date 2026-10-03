// FUNCTION: BF2 0x717e40
extern "C" void base_dice_hfe_world_ICollisionMesh_dtor_ICollisionMesh(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_717e40(void* self) {
    *(void**)self = (void*)0xb97710;
    base_dice_hfe_world_ICollisionMesh_dtor_ICollisionMesh(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_dtor_CollisionMesh (0x717e40)
