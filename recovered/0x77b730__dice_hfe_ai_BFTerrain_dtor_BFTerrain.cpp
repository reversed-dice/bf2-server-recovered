// FUNCTION: BF2 0x77b730
extern "C" void base_dice_hfe_ai_IAITerrain_dtor_IAITerrain(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_77b730(void* self) {
    *(void**)self = (void*)0xba25d0;
    base_dice_hfe_ai_IAITerrain_dtor_IAITerrain(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_dtor_BFTerrain (0x77b730)
