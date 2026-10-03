// FUNCTION: BF2 0x428b30
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_428b30(void* self) {
    *(void**)self = (void*)0xb2cdf0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_HandlePickupEvent_dtor_HandlePickupEvent (0x428b30)
