// FUNCTION: BF2 0x87ffa0
extern "C" void base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_87ffa0(void* self) {
    *(void**)self = (void*)0xbc4850;
    base_dice_hfe_ConsoleObjectBaseImpl_dtor_ConsoleObjectBaseImpl(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass176_dtor_ConsoleClass176 (0x87ffa0)
