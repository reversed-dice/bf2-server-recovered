// FUNCTION: BF2 0x427cf0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_427cf0(void* self) {
    *(void**)self = (void*)0xb2cb90;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_GrapplingHookCreateEvent_dtor_GrapplingHookCreateEvent (0x427cf0)
