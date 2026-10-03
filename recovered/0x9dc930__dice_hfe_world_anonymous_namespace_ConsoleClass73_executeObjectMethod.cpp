// FUNCTION: BF2 0x9dc930

extern "C" {
extern void* dice_hfe_world_anonymous_namespace_getActiveEffectBundle();
extern void dice_hfe_world_EffectBundle_setEmitSpeedScaleFactorForAllEffects_float(void*, float);
}
extern "C" long eom_9dc930(char* param_1) {
    if (*(int*)(param_1 + 0x30) != 1) {
        return 0;
    }
    float fv = *(float*)(*(int**)(param_1 + 0x38));
    *(unsigned char*)(param_1 + 0x108) = 0;
    void* uVar2 = dice_hfe_world_anonymous_namespace_getActiveEffectBundle();
    dice_hfe_world_EffectBundle_setEmitSpeedScaleFactorForAllEffects_float(uVar2, fv);
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass73_executeObjectMethod (0x9dc930)
