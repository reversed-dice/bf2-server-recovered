// FUNCTION: BF2 0x415d40
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415d40() {
    void* p = operator new(0x38);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2b7f0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ChangeSquadNameEvent_createEvent (0x415d40)
