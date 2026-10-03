// FUNCTION: BF2 0x905e70
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_905e70(void* self) {
    *(void**)self = (void*)0xbebc70;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass564_dtor_ConsoleClass564 (0x905e70)
