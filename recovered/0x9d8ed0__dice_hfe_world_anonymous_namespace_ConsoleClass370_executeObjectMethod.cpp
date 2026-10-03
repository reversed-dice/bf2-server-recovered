// FUNCTION: BF2 0x9d8ed0
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_ParticleSystemEmitterTemplate;
extern "C" void* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned);
extern "C" const unsigned int* dice_hfe_world_ParticleSystemTemplateBase_getTransparencyGraph_const(void*);
extern "C" void dice_hfe_world_ParticleSystemTemplateBase_setTransparencyGraph_dice_hfe_Vec4_constref(void*, const unsigned int*);

long dice_hfe_world_anonymous_namespace_ConsoleClass370_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_ParticleSystemEmitterTemplate);
        const unsigned int* vec = dice_hfe_world_ParticleSystemTemplateBase_getTransparencyGraph_const(obj);
        unsigned int* d = (unsigned int*)(param_1 + 0x10c);
        unsigned int a3 = vec[3], a2 = vec[2], a1 = vec[1], a0 = vec[0];
        d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
        return (long)d;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        const unsigned int* src = *(const unsigned int**)(param_1 + 0x38);
        unsigned int b3 = src[3], b2 = src[2], b1 = src[1], b0 = src[0];
        unsigned int tmp[4];
        tmp[0] = b0; tmp[1] = b1; tmp[2] = b2; tmp[3] = b3;
        *(char*)(param_1 + 0x108) = 0;
        void* obj = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_ParticleSystemEmitterTemplate);
        dice_hfe_world_ParticleSystemTemplateBase_setTransparencyGraph_dice_hfe_Vec4_constref(obj, tmp);
        return 0;
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass370_executeObjectMethod (0x9d8ed0)
