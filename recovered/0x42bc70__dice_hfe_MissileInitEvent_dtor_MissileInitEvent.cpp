// FUNCTION: BF2 0x42bc70
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42bc70(void* self) {
    *(void**)self = (void*)0xb2d470;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_MissileInitEvent_dtor_MissileInitEvent (0x42bc70)
