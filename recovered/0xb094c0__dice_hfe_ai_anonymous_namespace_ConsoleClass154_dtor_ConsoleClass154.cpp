// FUNCTION: BF2 0xb094c0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b094c0(void* self) {
    *(void**)self = (void*)0xc988d0;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass154_dtor_ConsoleClass154 (0xb094c0)
