// FUNCTION: BF2 0x42f240
extern "C" void base_dice_hfe_GameEvent_dtor_GameEvent(void* self);

extern "C" void dtor_42f240(void* self) {
    *(void**)self = (void*)0xb2ddd0;
    base_dice_hfe_GameEvent_dtor_GameEvent(self);
}
// REVERSED_FUNCTION: dice_hfe_SetAcceptOrderEvent_dtor_SetAcceptOrderEvent (0x42f240)
