// FUNCTION: BF2 0x701a90
typedef unsigned long long u8;
extern "C" u8 getHeightmapInWorldCoords_700f60(long, float, float);
extern "C" u8 wrap_701a90(long param_1, float a, float b) {
    if (*(char*)(param_1 + 0x45) != 0) return 0;
    return getHeightmapInWorldCoords_700f60(param_1 + 8, a, b);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getHeightmapInWorldCoords_float_float_const (0x701a90)
