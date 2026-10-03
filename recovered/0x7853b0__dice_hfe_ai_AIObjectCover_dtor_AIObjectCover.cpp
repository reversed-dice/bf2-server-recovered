// FUNCTION: BF2 0x7853b0
extern "C" void base_dice_hfe_ai_IAIObjectCover_dtor_IAIObjectCover(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_7853b0(void* self) {
    *(void**)self = (void*)0xba3df0;
    base_dice_hfe_ai_IAIObjectCover_dtor_IAIObjectCover(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectCover_dtor_AIObjectCover (0x7853b0)
