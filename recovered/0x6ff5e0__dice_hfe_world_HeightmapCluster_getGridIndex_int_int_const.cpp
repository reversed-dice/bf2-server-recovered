// FUNCTION: BF2 0x6ff5e0
extern "C" int getGridIndex_6ff5e0(long param_1, int param_2, int param_3) {
    int half = *(int*)(param_1 + 0x28) / 2;
    return half + param_2 + *(int*)(param_1 + 0x28) * (half + param_3);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getGridIndex_int_int_const (0x6ff5e0)
