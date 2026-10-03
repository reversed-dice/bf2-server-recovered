// FUNCTION: BF2 0xadf220
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_adf220(void* self) {
    *(void**)self = (void*)0xc8ce50;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass188_dtor_ConsoleClass188 (0xadf220)
