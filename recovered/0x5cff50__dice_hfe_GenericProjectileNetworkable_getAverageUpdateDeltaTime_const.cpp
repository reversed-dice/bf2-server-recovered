// FUNCTION: BF2 0x5cff50
namespace dice { namespace hfe {
float fn_5da9d0(long param_1) {
    float f = 0.0f;
    if (*(unsigned*)(param_1 + 0x38) != 0) {
        long base = *(long*)(param_1 + 0x78);
        f = (*(float*)((unsigned long)*(unsigned*)(param_1 + 0x3c) * 0x50 + base) -
             *(float*)((unsigned long)*(unsigned*)(param_1 + 0x40) * 0x50 + base)) /
            (float)*(unsigned*)(param_1 + 0x38);
    }
    return f;
}
} }

// REVERSED_FUNCTION: dice_hfe_GenericProjectileNetworkable_getAverageUpdateDeltaTime_const (0x5cff50)
