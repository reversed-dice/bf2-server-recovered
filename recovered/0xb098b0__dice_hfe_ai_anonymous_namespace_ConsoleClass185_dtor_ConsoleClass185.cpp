// FUNCTION: BF2 0xb098b0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b098b0(void* self) {
    *(void**)self = (void*)0xc9ac90;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass185_dtor_ConsoleClass185 (0xb098b0)
