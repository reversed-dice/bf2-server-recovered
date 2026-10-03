// FUNCTION: BF2 0x415820
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415820() {
    void* p = operator new(0x18);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2c7f0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_FixPlayerTeamEvent_createEvent (0x415820)
