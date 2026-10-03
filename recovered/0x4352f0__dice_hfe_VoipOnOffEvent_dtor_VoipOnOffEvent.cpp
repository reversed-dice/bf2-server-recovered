// FUNCTION: BF2 0x4352f0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4352f0(void* self) {
    *(void**)self = (void*)0xb2eab0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_VoipOnOffEvent_dtor_VoipOnOffEvent (0x4352f0)
