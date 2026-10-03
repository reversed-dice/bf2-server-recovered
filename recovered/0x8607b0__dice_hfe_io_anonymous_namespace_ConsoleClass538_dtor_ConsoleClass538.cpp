// FUNCTION: BF2 0x8607b0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_8607b0(void* self) {
    *(void**)self = (void*)0xbbf010;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass538_dtor_ConsoleClass538 (0x8607b0)
