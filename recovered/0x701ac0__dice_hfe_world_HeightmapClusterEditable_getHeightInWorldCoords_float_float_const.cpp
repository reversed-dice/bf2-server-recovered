// FUNCTION: BF2 0x701ac0
extern "C" float getHeightInWorldCoords_6ff860(long, float, float);
extern "C" float wrap_701ac0(long param_1, float a, float b) {
    if (*(char*)(param_1 + 0x45) != 0) return 0.0f;
    return getHeightInWorldCoords_6ff860(param_1 + 8, a, b);
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getHeightInWorldCoords_float_float_const (0x701ac0)
