// FUNCTION: BF2 0x647010
extern "C" void helper1(void*);
extern "C" void helper2(void*, void*);
void fn_0x647010(void* self, void* other) {
    helper1(self);
    helper2(other, self);
}
// REVERSED_FUNCTION: TiXmlElement_operator_TiXmlElement_constref (0x647010)
