// FUNCTION: BF2 0x78e710
extern "C" void base_dice_hfe_ai_AIObject_dtor_AIObject(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_78e710(void* self) {
    *(void**)self = (void*)0xba5d50;
    base_dice_hfe_ai_AIObject_dtor_AIObject(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectReal_dtor_AIObjectReal (0x78e710)
