// FUNCTION: BF2 0x5da9d0
namespace dice { namespace hfe {
float fn_5da9d0(long param_1) {
    float f = 0.0f;
    if (*(unsigned*)(param_1 + 0x38) != 0) {
        long base = *(long*)(param_1 + 0x78);
        f = (*(float*)((unsigned long)*(unsigned*)(param_1 + 0x3c) * 0xbc + base) -
             *(float*)((unsigned long)*(unsigned*)(param_1 + 0x40) * 0xbc + base)) /
            (float)*(unsigned*)(param_1 + 0x38);
    }
    return f;
}
} }
