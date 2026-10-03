// FUNCTION: BF2 0x4200f0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4200f0(void* self) {
    *(void**)self = (void*)0xb2b570;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_ChallengeEvent_dtor_ChallengeEvent (0x4200f0)
