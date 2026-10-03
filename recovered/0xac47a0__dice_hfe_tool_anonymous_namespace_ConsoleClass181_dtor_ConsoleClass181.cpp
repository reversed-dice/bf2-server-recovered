// FUNCTION: BF2 0xac47a0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_ac47a0(void* self) {
    *(void**)self = (void*)0xc81d90;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass181_dtor_ConsoleClass181 (0xac47a0)
