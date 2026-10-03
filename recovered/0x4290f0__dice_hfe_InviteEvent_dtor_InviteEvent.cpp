// FUNCTION: BF2 0x4290f0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4290f0(void* self) {
    *(void**)self = (void*)0xb2ceb0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_InviteEvent_dtor_InviteEvent (0x4290f0)
