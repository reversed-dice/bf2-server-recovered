// FUNCTION: BF2 0x782cb0
extern "C" void base_dice_hfe_ai_IAIObjectControlInfo_dtor_IAIObjectControlInfo(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_782cb0(void* self) {
    *(void**)self = (void*)0xba3890;
    base_dice_hfe_ai_IAIObjectControlInfo_dtor_IAIObjectControlInfo(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_dtor_AIObjectControlInfo (0x782cb0)
