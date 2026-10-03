// FUNCTION: BF2 0x6cfd10
extern "C" void base_dice_anim_Trigger_dtor_Trigger(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6cfd10(void* self) {
    *(void**)self = (void*)0xb91ed0;
    base_dice_anim_Trigger_dtor_Trigger(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_anim_SideTrigger_dtor_SideTrigger (0x6cfd10)
