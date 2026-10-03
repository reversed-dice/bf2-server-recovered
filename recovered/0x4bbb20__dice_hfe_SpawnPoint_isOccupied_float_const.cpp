// FUNCTION: BF2 0x4bbb20
extern "C" double getWorldTime_4bbb20();
extern "C" bool isOccupied_4bbb20(long param_1) {
    double t = getWorldTime_4bbb20();
    return t < (double)(*(float*)(param_1 + 0x238) + *(float*)(param_1 + 0x230));
}
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_isOccupied_float_const (0x4bbb20)
