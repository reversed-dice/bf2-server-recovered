// FUNCTION: BF2 0xa666b0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_a666b0(void* self) {
    *(void**)self = (void*)0xc5fb50;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass64_dtor_ConsoleClass64 (0xa666b0)
