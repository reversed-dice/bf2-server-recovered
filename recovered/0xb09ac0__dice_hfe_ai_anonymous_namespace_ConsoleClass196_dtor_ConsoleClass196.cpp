// FUNCTION: BF2 0xb09ac0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b09ac0(void* self) {
    *(void**)self = (void*)0xc9be70;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass196_dtor_ConsoleClass196 (0xb09ac0)
