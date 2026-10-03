// FUNCTION: BF2 0x87fee0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_87fee0(void* self) {
    *(void**)self = (void*)0xbc41d0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass172_dtor_ConsoleClass172 (0x87fee0)
