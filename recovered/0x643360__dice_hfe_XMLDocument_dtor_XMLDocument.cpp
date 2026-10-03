// FUNCTION: BF2 0x643360
extern "C" void base_dice_hfe_XMLNode_dtor_XMLNode(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_643360(void* self) {
    *(void**)self = (void*)0xb87fb0;
    base_dice_hfe_XMLNode_dtor_XMLNode(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_XMLDocument_dtor_XMLDocument (0x643360)
