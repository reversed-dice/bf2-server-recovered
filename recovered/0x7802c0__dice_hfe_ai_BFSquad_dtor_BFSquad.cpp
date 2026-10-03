// FUNCTION: BF2 0x7802c0
extern "C" void base_dice_hfe_ai_IBFSquad_dtor_IBFSquad(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_7802c0(void* self) {
    *(void**)self = (void*)0xba2fd0;
    base_dice_hfe_ai_IBFSquad_dtor_IBFSquad(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSquad_dtor_BFSquad (0x7802c0)
