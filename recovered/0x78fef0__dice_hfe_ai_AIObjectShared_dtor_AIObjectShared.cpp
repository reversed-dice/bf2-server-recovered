// FUNCTION: BF2 0x78fef0
extern "C" void base_dice_hfe_ai_AIObject_dtor_AIObject(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_78fef0(void* self) {
    *(void**)self = (void*)0xba66d0;
    base_dice_hfe_ai_AIObject_dtor_AIObject(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_dtor_AIObjectShared (0x78fef0)
