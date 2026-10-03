// FUNCTION: BF2 0x9dfd00
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_9dfd00(void* self) {
    *(void**)self = (void*)0xc31cf0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass145_dtor_ConsoleClass145 (0x9dfd00)
