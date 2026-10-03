// FUNCTION: BF2 0xa886f0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_a886f0(void* self) {
    *(void**)self = (void*)0xc726b0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass715_dtor_ConsoleClass715 (0xa886f0)
