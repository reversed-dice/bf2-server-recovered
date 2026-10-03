// FUNCTION: BF2 0x77b360
extern "C" void base_dice_hfe_ai_IAIPhysics_dtor_IAIPhysics(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_77b360(void* self) {
    *(void**)self = (void*)0xba2430;
    base_dice_hfe_ai_IAIPhysics_dtor_IAIPhysics(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFPhysics_dtor_BFPhysics (0x77b360)
