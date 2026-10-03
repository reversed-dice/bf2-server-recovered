// FUNCTION: BF2 0x4158b0
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_4158b0() {
    void* p = operator new(0x20);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2d5f0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_PlayerTearGassedEvent_createEvent (0x4158b0)
