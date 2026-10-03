// FUNCTION: BF2 0x610190
namespace dice { namespace hfe { namespace world {
extern float DAT_00b2f3c0;
float fn_610190(long param_1) {
    float f = *(float*)(param_1 + 0x27c);
    if (f == DAT_00b2f3c0) {
        f = *(float*)(param_1 + 0x278);
    }
    return f;
}
} } }
