// FUNCTION: BF2 0x424840
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_424840(void* self) {
    *(void**)self = (void*)0xb2c150;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_CreateSpawnGroupEvent_dtor_CreateSpawnGroupEvent (0x424840)
