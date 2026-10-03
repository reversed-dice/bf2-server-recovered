// FUNCTION: BF2 0x9d8aa0
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_ParticleTemplate;
extern "C" long dice_hfe_world_getActiveTemplate_unsigned_int(unsigned);
extern "C" unsigned* dice_hfe_world_ParticleTemplate_getTransparencyGraph_const(long);
extern "C" void dice_hfe_world_ParticleTemplate_setTransparencyGraph_dice_hfe_Vec4_constref(long, unsigned*);

long cb_0x9d8aa0(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        long obj = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_ParticleTemplate);
        unsigned* p = dice_hfe_world_ParticleTemplate_getTransparencyGraph_const(obj);
        unsigned w = p[3];
        unsigned z = p[2];
        unsigned* out = (unsigned*)(param_1 + 0x10c);
        unsigned y = p[1];
        unsigned x = p[0];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        out[3] = w;
        return (long)out;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(param_1 + 0x38);
        unsigned d = q[3];
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf[4];
        buf[0] = a;
        buf[1] = b;
        buf[2] = c;
        buf[3] = d;
        *(char*)(param_1 + 0x108) = 0;
        long obj = dice_hfe_world_getActiveTemplate_unsigned_int(dice_hfe_world_CID_ParticleTemplate);
        dice_hfe_world_ParticleTemplate_setTransparencyGraph_dice_hfe_Vec4_constref(obj, buf);
        return 0;
    }
}
} }
