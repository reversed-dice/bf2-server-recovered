// FUNCTION: BF2 0x415880
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415880() {
    void* p = operator new(0x18);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2deb0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_SetNightVisionEvent_createEvent (0x415880)
