// FUNCTION: BF2 0x4342a0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4342a0(void* self) {
    *(void**)self = (void*)0xb2e850;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_UnlockEvent_dtor_UnlockEvent (0x4342a0)
