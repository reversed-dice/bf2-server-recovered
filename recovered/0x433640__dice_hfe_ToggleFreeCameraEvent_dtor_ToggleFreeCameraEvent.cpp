// FUNCTION: BF2 0x433640
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_433640(void* self) {
    *(void**)self = (void*)0xb2e6d0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_ToggleFreeCameraEvent_dtor_ToggleFreeCameraEvent (0x433640)
