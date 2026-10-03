// FUNCTION: BF2 0x415970
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415970() {
    void* p = operator new(0x20);
    dice_hfe_GameEvent_GameEvent(p);
    *(void**)p = (void*)0xb2c150;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_CreateSpawnGroupEvent_createEvent (0x415970)
