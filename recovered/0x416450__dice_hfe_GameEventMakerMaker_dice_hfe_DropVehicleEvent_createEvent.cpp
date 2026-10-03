// FUNCTION: BF2 0x416450
extern "C" void dice_hfe_GameEvent_GameEvent(void*);
extern "C" void* create_416450() {
    char* p = (char*)operator new(0x20);
    dice_hfe_GameEvent_GameEvent(p);
    float z = 0.0f;
    *(void**)p = (void*)0xb2c490;
    *(float*)(p + 0x10) = z;
    *(float*)(p + 0x14) = z;
    return p;
}
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_DropVehicleEvent_createEvent (0x416450)
