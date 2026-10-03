// FUNCTION: BF2 0x7000f0
#include <cmath>
extern "C" {
extern float _DAT_00b2f234;
}

extern "C" int isInsideHeightmapCluster_7000f0(float param_1, float param_2, long param_3) {
    float scale = _DAT_00b2f234 * (*(float*)(param_3 + 0x38)) * (float)(*(int*)(param_3 + 0x28));
    if (fabsf(param_1) <= scale && fabsf(param_2) <= scale) return 1;
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_isInsideHeightmapCluster_float_float_const (0x7000f0)
