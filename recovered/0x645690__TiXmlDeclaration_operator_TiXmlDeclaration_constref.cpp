// FUNCTION: BF2 0x645690
extern "C" void helper1(void*);
extern "C" void helper2(void*, void*);
void fn_0x645690(void* self, void* other) {
    helper1(self);
    helper2(other, self);
}
// REVERSED_FUNCTION: TiXmlDeclaration_operator_TiXmlDeclaration_constref (0x645690)
