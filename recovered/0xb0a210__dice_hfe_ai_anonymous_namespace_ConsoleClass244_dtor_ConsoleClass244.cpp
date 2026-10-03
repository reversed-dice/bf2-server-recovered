// FUNCTION: BF2 0xb0a210
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b0a210(void* self) {
    *(void**)self = (void*)0xca0110;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass244_dtor_ConsoleClass244 (0xb0a210)
