// FUNCTION: BF2 0x422e60
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_422e60(void* self) {
    *(void**)self = (void*)0xb2bd70;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_CreateKitEvent_dtor_CreateKitEvent (0x422e60)
