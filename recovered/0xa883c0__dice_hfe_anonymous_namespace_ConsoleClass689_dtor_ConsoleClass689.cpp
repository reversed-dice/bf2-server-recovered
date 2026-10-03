// FUNCTION: BF2 0xa883c0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_a883c0(void* self) {
    *(void**)self = (void*)0xc70630;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass689_dtor_ConsoleClass689 (0xa883c0)
