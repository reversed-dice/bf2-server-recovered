// FUNCTION: BF2 0x599510
namespace dice { namespace hfe { namespace world {
extern "C" void fn_599430(float* a, float* b);
void eom_599510(char* self, int v, float f0, float f1) {
    float s[2];
    s[1] = f0;
    s[0] = f1;
    fn_599430(&s[1], s);
    char* d = self + 0x210;
    *(int*)(d + 0x0) = v;
    *(float*)(d + 0x4) = s[1];
    *(float*)(d + 0x8) = s[0];
    *(char*)(d + 0xc) = 0;
}
} } }
// REVERSED_FUNCTION: test (0x599510)
