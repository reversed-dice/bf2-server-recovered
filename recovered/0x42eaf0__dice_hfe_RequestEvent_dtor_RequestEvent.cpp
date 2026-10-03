// FUNCTION: BF2 0x42eaf0
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42eaf0(void* self) {
    *(void**)self = (void*)0xb2dcf0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_RequestEvent_dtor_RequestEvent (0x42eaf0)
