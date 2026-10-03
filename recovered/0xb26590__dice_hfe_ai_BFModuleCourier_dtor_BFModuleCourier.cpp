// FUNCTION: BF2 0xb26590
extern "C" void base_dice_hfe_ai_IBFModuleCourier_dtor_IBFModuleCourier(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_b26590(void* self) {
    *(void**)self = (void*)0xca1d30;
    base_dice_hfe_ai_IBFModuleCourier_dtor_IBFModuleCourier(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFModuleCourier_dtor_BFModuleCourier (0xb26590)
