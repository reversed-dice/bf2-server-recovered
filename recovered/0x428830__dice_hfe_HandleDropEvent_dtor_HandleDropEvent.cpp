// FUNCTION: BF2 0x428830
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_428830(void* self) {
    *(void**)self = (void*)0xb2cd30;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_HandleDropEvent_dtor_HandleDropEvent (0x428830)
