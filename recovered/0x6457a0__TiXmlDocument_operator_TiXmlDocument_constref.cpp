// FUNCTION: BF2 0x6457a0
extern "C" void helper1(void*);
extern "C" void helper2(void*, void*);
void fn_0x6457a0(void* self, void* other) {
    helper1(self);
    helper2(other, self);
}
// REVERSED_FUNCTION: TiXmlDocument_operator_TiXmlDocument_constref (0x6457a0)
