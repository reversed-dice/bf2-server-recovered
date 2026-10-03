// FUNCTION: BF2 0x42aa80
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42aa80(void* self) {
    *(void**)self = (void*)0xb2d230;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_KilledByEvent_dtor_KilledByEvent (0x42aa80)
