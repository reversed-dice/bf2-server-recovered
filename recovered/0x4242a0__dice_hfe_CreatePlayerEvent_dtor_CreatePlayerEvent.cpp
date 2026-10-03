// FUNCTION: BF2 0x4242a0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4242a0(void* self) {
    *(void**)self = (void*)0xb2c010;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_CreatePlayerEvent_dtor_CreatePlayerEvent (0x4242a0)
