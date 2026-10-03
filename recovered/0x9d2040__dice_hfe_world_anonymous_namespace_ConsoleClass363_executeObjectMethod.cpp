// FUNCTION: BF2 0x9d2040
namespace dice { namespace hfe {
extern "C" long dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase();
extern "C" float dice_hfe_world_ParticleSystemTemplateBase_getRandomTimeToLive(long);
extern "C" void dice_hfe_world_ParticleSystemTemplateBase_setRandomTimeToLive_float(float, long);

long cb_0x9d2040(long param_1) {
    long lVar2;
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long uVar1 = dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase();
        float uVar3 = dice_hfe_world_ParticleSystemTemplateBase_getRandomTimeToLive(uVar1);
        lVar2 = param_1 + 0x10c;
        *(float*)(param_1+0x10c) = uVar3;
        return lVar2;
    }
    if (*(int*)(param_1+0x30) == 1) {
        float uVar3 = **(float**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long uVar1 = dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase();
        dice_hfe_world_ParticleSystemTemplateBase_setRandomTimeToLive_float(uVar3, uVar1);
        return 0;
    }
    return 0;
}
} }
