// FUNCTION: BF2 0x432880
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_432880(void* self) {
    *(void**)self = (void*)0xb2e3d0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_StringManagerEvent_dtor_StringManagerEvent (0x432880)
