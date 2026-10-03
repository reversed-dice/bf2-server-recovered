// FUNCTION: BF2 0x415f20
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415f20() {
    void* p = operator new(0x18);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2c670;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_EnterVehicleEvent_createEvent (0x415f20)
