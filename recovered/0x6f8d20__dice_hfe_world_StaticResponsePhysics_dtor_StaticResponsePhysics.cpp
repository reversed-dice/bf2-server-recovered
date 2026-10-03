// FUNCTION: BF2 0x6f8d20
extern "C" void base_dice_hfe_world_IResponsePhysics_dtor_IResponsePhysics(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6f8d20(void* self) {
    *(void**)self = (void*)0xb96210;
    base_dice_hfe_world_IResponsePhysics_dtor_IResponsePhysics(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_dtor_StaticResponsePhysics (0x6f8d20)
