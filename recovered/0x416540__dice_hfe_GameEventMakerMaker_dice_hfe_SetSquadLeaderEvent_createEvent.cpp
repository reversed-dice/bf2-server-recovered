// FUNCTION: BF2 0x416540
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_416540() {
    void* p = operator new(0x18);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2e070;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_SetSquadLeaderEvent_createEvent (0x416540)
