// FUNCTION: BF2 0x77b400
extern "C" void base_dice_hfe_ai_IBFRadioComm_dtor_IBFRadioComm(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_77b400(void* self) {
    *(void**)self = (void*)0xba24b0;
    base_dice_hfe_ai_IBFRadioComm_dtor_IBFRadioComm(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFRadioComm_dtor_BFRadioComm (0x77b400)
