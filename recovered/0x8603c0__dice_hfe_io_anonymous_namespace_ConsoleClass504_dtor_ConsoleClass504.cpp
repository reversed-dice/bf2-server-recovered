// FUNCTION: BF2 0x8603c0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_8603c0(void* self) {
    *(void**)self = (void*)0xbbcc50;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass504_dtor_ConsoleClass504 (0x8603c0)
