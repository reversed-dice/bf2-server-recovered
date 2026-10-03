// FUNCTION: BF2 0x591070
extern "C" unsigned int* getPropertyRange_591070(unsigned int* param_1, char* param_2, int param_3) {
    char* base = param_2 + (long)param_3 * 8;
    unsigned int second = *(unsigned int*)(base + 0xc);
    param_1[0] = *(unsigned int*)(base + 8);
    param_1[1] = second;
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getPropertyRange_dice_hfe_world_EffectProperty_const (0x591070)
