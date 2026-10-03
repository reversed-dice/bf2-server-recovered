// FUNCTION: BF2 0x433490
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_433490(void* self) {
    *(void**)self = (void*)0xb2e590;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_TargetDirectionEvent_dtor_TargetDirectionEvent (0x433490)
