// FUNCTION: BF2 0x79c260
extern "C" void base_dice_hfe_ai_IBFGraphCreator_dtor_IBFGraphCreator(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_79c260(void* self) {
    *(void**)self = (void*)0xba7df0;
    base_dice_hfe_ai_IBFGraphCreator_dtor_IBFGraphCreator(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFGraphCreator_dtor_BFGraphCreator (0x79c260)
