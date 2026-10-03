// FUNCTION: BF2 0x4221f0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_4221f0(void* self) {
    *(void**)self = (void*)0xb2b970;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_CommanderEvent_dtor_CommanderEvent (0x4221f0)
