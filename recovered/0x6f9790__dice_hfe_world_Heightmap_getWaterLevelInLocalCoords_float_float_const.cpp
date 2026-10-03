// FUNCTION: BF2 0x6f9790
namespace dice { namespace hfe { namespace world {
extern "C" float fn_getWaterLevelFromGrid(void* self, int x, int y);
float eom_6f9790(float a, float b, char* self) {
    if (__builtin_expect(*(long*)(self + 0xe0) == 0, 0)) {
        return *(float*)(self + 0x58);
    }
    return fn_getWaterLevelFromGrid(self, (int)(a * *(float*)(self + 0x48)) / 2, (int)(b * *(float*)(self + 0x50)) / 2);
}
} } }
// REVERSED_FUNCTION: test (0x6f9790)
