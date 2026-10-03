// FUNCTION: BF2 0x4158e0
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_4158e0() {
    void* p = operator new(0x20);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2cab0;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_GrapplingHookContainerUpdateEvent_createEvent (0x4158e0)
