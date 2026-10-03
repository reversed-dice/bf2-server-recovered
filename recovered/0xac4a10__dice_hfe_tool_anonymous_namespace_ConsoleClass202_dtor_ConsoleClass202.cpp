// FUNCTION: BF2 0xac4a10
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_ac4a10(void* self) {
    *(void**)self = (void*)0xc83d10;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass202_dtor_ConsoleClass202 (0xac4a10)
