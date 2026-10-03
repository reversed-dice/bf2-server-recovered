// FUNCTION: BF2 0x4283b0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4283b0(void* self) {
    *(void**)self = (void*)0xb2cc70;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_GrapplingHookUpdateEvent_dtor_GrapplingHookUpdateEvent (0x4283b0)
