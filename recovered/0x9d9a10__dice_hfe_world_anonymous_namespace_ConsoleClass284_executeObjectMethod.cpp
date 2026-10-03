// FUNCTION: BF2 0x9d9a10
namespace dice { namespace hfe {

struct Vec3_9d9a10 { float x, y, z; };

extern void* dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase();
extern void dice_hfe_world_ParticleSystemTemplateBase_getEmitDirection_const(Vec3_9d9a10* out, void* tmpl);
extern void dice_hfe_world_ParticleSystemTemplateBase_setEmitDirection_dice_hfe_Vec3_constref(void* tmpl, const Vec3_9d9a10&);

void* eom_9d9a10(char* self) {
    // One read: the target keeps the mode in one register and tests the second
    // case with DEC/JNZ.
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        Vec3_9d9a10 t;
        dice_hfe_world_ParticleSystemTemplateBase_getEmitDirection_const(&t, dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase());
        // Plain field copies: the source is a fresh stack temporary, so the
        // target reuses one register and interleaves load and store.
        const unsigned int* s = (const unsigned int*)&t;
        unsigned int* d = (unsigned int*)(self + 0x10c);
        d[0] = s[0]; d[1] = s[1]; d[2] = s[2];
        return (void*)d;
    }
    if (mode == 1) {
        // Read DESCENDING into distinct locals, write ASCENDING. Reversing
        // either half reorders the stores and costs the match.
        const unsigned int* s = *(const unsigned int**)(self + 0x38);
        unsigned int b2 = s[2], b1 = s[1], b0 = s[0];
        unsigned int tmp[3];
        tmp[0] = b0; tmp[1] = b1; tmp[2] = b2;
        *(unsigned char*)(self + 0x108) = 0;
        dice_hfe_world_ParticleSystemTemplateBase_setEmitDirection_dice_hfe_Vec3_constref(dice_hfe_world_anonymous_namespace_getParticleSystemTemplateBase(), *(const Vec3_9d9a10*)tmp);
    }
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass284_executeObjectMethod (0x9d9a10)
