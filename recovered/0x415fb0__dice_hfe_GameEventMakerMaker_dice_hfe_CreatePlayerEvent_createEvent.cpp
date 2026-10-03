// FUNCTION: BF2 0x415fb0
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415fb0() {
    void* p = operator new(0x40);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2c010;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_CreatePlayerEvent_createEvent (0x415fb0)
