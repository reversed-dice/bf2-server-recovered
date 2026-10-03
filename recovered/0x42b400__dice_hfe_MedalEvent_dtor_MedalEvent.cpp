// FUNCTION: BF2 0x42b400
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42b400(void* self) {
    *(void**)self = (void*)0xb2d3b0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_MedalEvent_dtor_MedalEvent (0x42b400)
