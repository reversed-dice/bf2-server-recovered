// FUNCTION: BF2 0x9e09f0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_9e09f0(void* self) {
    *(void**)self = (void*)0xc3b8b0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass320_dtor_ConsoleClass320 (0x9e09f0)
