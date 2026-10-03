// FUNCTION: BF2 0x860270
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_860270(void* self) {
    *(void**)self = (void*)0xbbad70;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass441_dtor_ConsoleClass441 (0x860270)
