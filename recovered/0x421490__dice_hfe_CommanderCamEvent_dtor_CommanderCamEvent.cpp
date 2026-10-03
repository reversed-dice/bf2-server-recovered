// FUNCTION: BF2 0x421490
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_421490(void* self) {
    *(void**)self = (void*)0xb2b8b0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_CommanderCamEvent_dtor_CommanderCamEvent (0x421490)
