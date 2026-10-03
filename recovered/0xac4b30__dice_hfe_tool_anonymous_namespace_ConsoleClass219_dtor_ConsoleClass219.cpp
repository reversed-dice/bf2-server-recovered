// FUNCTION: BF2 0xac4b30
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_ac4b30(void* self) {
    *(void**)self = (void*)0xc84e90;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass219_dtor_ConsoleClass219 (0xac4b30)
