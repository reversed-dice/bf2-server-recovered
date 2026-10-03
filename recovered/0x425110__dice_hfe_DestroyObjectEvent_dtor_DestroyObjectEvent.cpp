// FUNCTION: BF2 0x425110
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_425110(void* self) {
    *(void**)self = (void*)0xb2c310;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent_dtor_DestroyObjectEvent (0x425110)
