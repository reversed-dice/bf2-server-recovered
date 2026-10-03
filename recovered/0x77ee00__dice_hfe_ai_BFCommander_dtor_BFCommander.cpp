// FUNCTION: BF2 0x77ee00
extern "C" void base_dice_hfe_ai_IBFCommander_dtor_IBFCommander(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_77ee00(void* self) {
    *(void**)self = (void*)0xba2e70;
    base_dice_hfe_ai_IBFCommander_dtor_IBFCommander(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFCommander_dtor_BFCommander (0x77ee00)
