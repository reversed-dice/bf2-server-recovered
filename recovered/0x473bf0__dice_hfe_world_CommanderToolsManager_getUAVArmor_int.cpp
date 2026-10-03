// FUNCTION: BF2 0x473bf0
namespace dice { namespace hfe { namespace world {
extern "C" float g_b2d910;
int eom_473bf0(char* self, int idx) {
    int i = idx - 1;
    if ((unsigned int)i > 1) {
        return 0;
    }
    float f = *(float*)(self + (long)i * 0x38 + 0x28);
    return f > g_b2d910;
}
} } }
// REVERSED_FUNCTION: test (0x473bf0)
