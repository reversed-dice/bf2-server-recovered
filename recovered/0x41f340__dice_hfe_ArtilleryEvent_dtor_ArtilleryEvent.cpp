// FUNCTION: BF2 0x41f340
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_41f340(void* self) {
    *(void**)self = (void*)0xb2b2b0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_ArtilleryEvent_dtor_ArtilleryEvent (0x41f340)
