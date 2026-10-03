// FUNCTION: BF2 0x425d70
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_425d70(void* self) {
    *(void**)self = (void*)0xb2c550;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_EndOfRoundEvent_dtor_EndOfRoundEvent (0x425d70)
