// FUNCTION: BF2 0x426bb0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_426bb0(void* self) {
    *(void**)self = (void*)0xb2c8d0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_dtor_GrapplingHookContainerCreateEvent (0x426bb0)
