// FUNCTION: BF2 0x860360
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_860360(void* self) {
    *(void**)self = (void*)0xbbc910;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass461_dtor_ConsoleClass461 (0x860360)
