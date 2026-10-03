// FUNCTION: BF2 0x9082d0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_9082d0(void* self) {
    *(void**)self = (void*)0xc007f0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1030_dtor_ConsoleClass1030 (0x9082d0)
