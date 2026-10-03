// FUNCTION: BF2 0x415c20
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_415c20() {
    char* p = (char*)operator new(0x28);
    dice_hfe_GameEvent_GameEvent(p);
    float z = 0.0f;
    *(void**)p = (void*)0xb2e130;
    *(float*)(p + 0x18) = z;
    *(float*)(p + 0x1c) = z;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_SpottedEvent_createEvent (0x415c20)
