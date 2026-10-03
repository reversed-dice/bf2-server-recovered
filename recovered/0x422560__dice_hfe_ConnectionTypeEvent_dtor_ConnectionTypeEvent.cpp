// FUNCTION: BF2 0x422560
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_422560(void* self) {
    *(void**)self = (void*)0xb2bb90;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_ConnectionTypeEvent_dtor_ConnectionTypeEvent (0x422560)
