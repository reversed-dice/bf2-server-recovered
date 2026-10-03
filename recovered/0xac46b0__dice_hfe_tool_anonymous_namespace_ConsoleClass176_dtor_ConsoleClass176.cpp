// FUNCTION: BF2 0xac46b0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_ac46b0(void* self) {
    *(void**)self = (void*)0xc814d0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass176_dtor_ConsoleClass176 (0xac46b0)
