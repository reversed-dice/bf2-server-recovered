// FUNCTION: BF2 0x5907e0
extern "C" unsigned int* getProperty_5907e0(unsigned int* param_1, char* param_2, int param_3, int param_4) {
    long off = ((long)param_3 * 6 + (long)param_4) * 8;
    char* hdr = param_2 + 0x30;
    char* base = hdr + off;
    unsigned int second = *(unsigned int*)(base + 0xc);
    param_1[0] = *(unsigned int*)(base + 8);
    param_1[1] = second;
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_getProperty_dice_hfe_world_EffectProperty_dice_hfe_world_EffectAffector_const (0x5907e0)
