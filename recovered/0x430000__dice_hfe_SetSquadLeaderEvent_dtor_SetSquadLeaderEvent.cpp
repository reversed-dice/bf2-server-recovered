// FUNCTION: BF2 0x430000
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_430000(void* self) {
    *(void**)self = (void*)0xb2d050;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_SetSquadLeaderEvent_dtor_SetSquadLeaderEvent (0x430000)
