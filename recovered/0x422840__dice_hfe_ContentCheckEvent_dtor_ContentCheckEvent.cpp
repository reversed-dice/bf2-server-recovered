// FUNCTION: BF2 0x422840
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_422840(void* self) {
    *(void**)self = (void*)0xb2bcb0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_ContentCheckEvent_dtor_ContentCheckEvent (0x422840)
