// FUNCTION: BF2 0x473e00
namespace dice { namespace hfe { namespace world {
extern "C" float g_b2d910;
bool eom_473e00(char* self, char* out) {
    float f = *(float*)(self + 0x0);
    if (f > g_b2d910) {
        int* v = (int*)(self + 0x10);
        int c = v[2];
        int b = v[1];
        int a = v[0];
        *(int*)(out + 0x0) = a;
        *(int*)(out + 0x4) = b;
        *(int*)(out + 0x8) = c;
        return true;
    }
    return false;
}
} } }
// REVERSED_FUNCTION: test (0x473e00)
