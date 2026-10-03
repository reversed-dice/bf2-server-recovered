// FUNCTION: BF2 0x6f9440
namespace dice { namespace hfe { namespace world {
float eom_6f9440(char* self, int gx, int gy) {
    int w2 = *(int*)(self + 0x34) / 2;
    int x = w2 + gx;
    int h2 = *(int*)(self + 0x38) / 2;
    int y = h2 + gy;
    int rows = (*(int*)(self + 0x28) - 1) / 2;
    int idx = x + y * rows;
    float* base = *(float**)(self + 0xe0);
    return base[idx];
}
} } }
// REVERSED_FUNCTION: test (0x6f9440)
