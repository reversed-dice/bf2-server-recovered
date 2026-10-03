// FUNCTION: BF2 0xb0a090
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b0a090(void* self) {
    *(void**)self = (void*)0xc9f410;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass236_dtor_ConsoleClass236 (0xb0a090)
