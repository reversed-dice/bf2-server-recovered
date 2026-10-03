// FUNCTION: BF2 0x42b050
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42b050(void* self) {
    *(void**)self = (void*)0xb2d050;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_LeaveSquadEvent_dtor_LeaveSquadEvent (0x42b050)
