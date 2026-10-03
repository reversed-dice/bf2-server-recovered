// FUNCTION: BF2 0x76f4b0
extern "C" void base_dice_hfe_ai_IAIGame_dtor_IAIGame(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_76f4b0(void* self) {
    *(void**)self = (void*)0xba1830;
    base_dice_hfe_ai_IAIGame_dtor_IAIGame(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFGame_dtor_BFGame (0x76f4b0)
