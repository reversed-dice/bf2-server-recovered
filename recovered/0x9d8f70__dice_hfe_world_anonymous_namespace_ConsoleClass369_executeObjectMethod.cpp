// FUNCTION: BF2 0x9d8f70
namespace dice { namespace hfe {

struct Vec4_9d8f70 { float x, y, z, w; };

extern void* dice_hfe_world_anonymous_namespace_getParticleSystemTemplate();
extern const Vec4_9d8f70* dice_hfe_world_ParticleSystemTemplateBase_getTransparencyGraph_const(void*);
extern void dice_hfe_world_ParticleSystemTemplateBase_setTransparencyGraph_dice_hfe_Vec4_constref(void*, const Vec4_9d8f70&);

void* eom_9d8f70(char* self) {
    // One read: the target keeps the mode in one register and tests the second
    // case with DEC/JNZ.
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        // Four 32-bit copies, read descending and written ascending. A struct
        // assignment would become a block move with 8-byte pieces.
        const unsigned int* s = (const unsigned int*)dice_hfe_world_ParticleSystemTemplateBase_getTransparencyGraph_const(dice_hfe_world_anonymous_namespace_getParticleSystemTemplate());
        unsigned int a3 = s[3], a2 = s[2], a1 = s[1], a0 = s[0];
        unsigned int* d = (unsigned int*)(self + 0x10c);
        d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
        return (void*)d;
    }
    if (mode == 1) {
        const unsigned int* s = *(const unsigned int**)(self + 0x38);
        unsigned int b3 = s[3], b2 = s[2], b1 = s[1], b0 = s[0];
        unsigned int tmp[4];
        tmp[0] = b0; tmp[1] = b1; tmp[2] = b2; tmp[3] = b3;
        *(unsigned char*)(self + 0x108) = 0;
        dice_hfe_world_ParticleSystemTemplateBase_setTransparencyGraph_dice_hfe_Vec4_constref(dice_hfe_world_anonymous_namespace_getParticleSystemTemplate(), *(const Vec4_9d8f70*)tmp);
    }
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass369_executeObjectMethod (0x9d8f70)
