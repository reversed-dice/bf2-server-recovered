// FUNCTION: BF2 0xade950
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_ade950(void* self) {
    *(void**)self = (void*)0xc86710;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass98_dtor_ConsoleClass98 (0xade950)
