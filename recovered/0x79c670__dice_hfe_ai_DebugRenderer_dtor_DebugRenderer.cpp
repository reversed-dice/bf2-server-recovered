// FUNCTION: BF2 0x79c670
extern "C" void base_dice_hfe_ai_IDebugRenderer_dtor_IDebugRenderer(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_79c670(void* self) {
    *(void**)self = (void*)0xba7e70;
    base_dice_hfe_ai_IDebugRenderer_dtor_IDebugRenderer(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_DebugRenderer_dtor_DebugRenderer (0x79c670)
