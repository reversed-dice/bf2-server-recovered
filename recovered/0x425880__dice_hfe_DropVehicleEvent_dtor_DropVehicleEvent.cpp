// FUNCTION: BF2 0x425880
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_425880(void* self) {
    *(void**)self = (void*)0xb2c490;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_DropVehicleEvent_dtor_DropVehicleEvent (0x425880)
