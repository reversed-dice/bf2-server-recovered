// FUNCTION: BF2 0x6cf9a0
extern "C" void base_dice_anim_Trigger_dtor_Trigger(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6cf9a0(void* self) {
    *(void**)self = (void*)0xb91bd0;
    base_dice_anim_Trigger_dtor_Trigger(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_anim_RandomTrigger_dtor_RandomTrigger (0x6cf9a0)
