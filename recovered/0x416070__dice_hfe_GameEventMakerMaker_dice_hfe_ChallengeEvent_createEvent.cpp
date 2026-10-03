// FUNCTION: BF2 0x416070
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_416070() {
    void* p = operator new(0x30);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2b570;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ChallengeEvent_createEvent (0x416070)
