// FUNCTION: BF2 0x701de0

extern "C" int isInsideHeightmapCluster_7000f0(float, float, long);
extern "C" unsigned char wrap_701de0(long param_1, float a, float b) {
    if (*(char*)(param_1 + 0x45) != 0) return 1;
    return (unsigned char)isInsideHeightmapCluster_7000f0(a, b, param_1 + 8);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_isInsideHeightmapCluster_float_float_const (0x701de0)
