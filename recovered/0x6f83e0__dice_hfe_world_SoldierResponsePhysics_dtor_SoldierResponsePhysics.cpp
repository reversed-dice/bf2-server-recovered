// FUNCTION: BF2 0x6f83e0
extern "C" void base_dice_hfe_world_IResponsePhysics_dtor_IResponsePhysics(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6f83e0(void* self) {
    *(void**)self = (void*)0xb96210;
    base_dice_hfe_world_IResponsePhysics_dtor_IResponsePhysics(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_dtor_SoldierResponsePhysics (0x6f83e0)
