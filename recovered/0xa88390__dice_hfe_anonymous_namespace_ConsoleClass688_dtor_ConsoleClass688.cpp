// FUNCTION: BF2 0xa88390
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_a88390(void* self) {
    *(void**)self = (void*)0xc70490;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass688_dtor_ConsoleClass688 (0xa88390)
