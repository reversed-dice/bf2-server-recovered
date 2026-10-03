// FUNCTION: BF2 0x6cf940
extern "C" void base_dice_anim_Trigger_dtor_Trigger(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_6cf940(void* self) {
    *(void**)self = (void*)0xb91d50;
    base_dice_anim_Trigger_dtor_Trigger(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_anim_MessageTrigger_dtor_MessageTrigger (0x6cf940)
