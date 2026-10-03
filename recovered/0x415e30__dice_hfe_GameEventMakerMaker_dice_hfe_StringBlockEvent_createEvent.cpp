// FUNCTION: BF2 0x415e30
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415e30() {
    void* p = operator new(0x58);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2e2d0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_StringBlockEvent_createEvent (0x415e30)
