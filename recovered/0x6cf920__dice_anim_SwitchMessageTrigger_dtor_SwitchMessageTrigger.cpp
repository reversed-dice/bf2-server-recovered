// FUNCTION: BF2 0x6cf920
extern "C" void base_dice_anim_Trigger_dtor_Trigger(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6cf920(void* self) {
    *(void**)self = (void*)0xb91d50;
    base_dice_anim_Trigger_dtor_Trigger(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_anim_SwitchMessageTrigger_dtor_SwitchMessageTrigger (0x6cf920)
