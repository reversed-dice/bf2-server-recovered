// FUNCTION: BF2 0x83b1f0
extern "C" void helper1(void*, int);
extern "C" void helper2(void*, int);
void fn_0x83b1f0(void* self, int idx) {
    helper1(self, idx);
    helper2(self, idx);
}
// REVERSED_FUNCTION: ArrayDeleteAt (0x83b1f0)
