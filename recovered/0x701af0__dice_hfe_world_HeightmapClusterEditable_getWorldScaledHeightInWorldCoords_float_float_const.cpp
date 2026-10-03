// FUNCTION: BF2 0x701af0
extern "C" float getWorldScaledHeightInWorldCoords_6ff920(long, float, float);
extern "C" float wrap_701af0(long param_1, float a, float b) {
    if (*(char*)(param_1 + 0x45) != 0) return 0.0f;
    return getWorldScaledHeightInWorldCoords_6ff920(param_1 + 8, a, b);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getWorldScaledHeightInWorldCoords_float_float_const (0x701af0)
