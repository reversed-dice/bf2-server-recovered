// FUNCTION: BF2 0x415c80
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415c80() {
    void* p = operator new(0x20);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2d110;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_KickBanEvent_createEvent (0x415c80)
