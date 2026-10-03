// FUNCTION: BF2 0x415fe0
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415fe0() {
    void* p = operator new(0x60);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2c210;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_DataBlockEvent_createEvent (0x415fe0)
