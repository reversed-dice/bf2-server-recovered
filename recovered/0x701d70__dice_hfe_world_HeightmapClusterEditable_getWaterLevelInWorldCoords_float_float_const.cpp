// FUNCTION: BF2 0x701d70

extern "C" float getWaterLevelInWorldCoords_6ffb30(float, float, long);
extern "C" float wrap_701d70(float a, float b, long param_3) {
    if (*(char*)(param_3 + 0x46) != 0) {
        if (*(char*)(param_3 + 0x45) != 0) {
            return *(float*)(param_3 + 0x48);
        }
    } else if (*(char*)(param_3 + 0x45) != 0) {
        unsigned int bits = 0xc61c4000;
        return *(float*)&bits;
    }
    return getWaterLevelInWorldCoords_6ffb30(a, b, param_3 + 8);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getWaterLevelInWorldCoords_float_float_const (0x701d70)
