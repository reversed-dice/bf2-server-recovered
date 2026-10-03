namespace dice { namespace hfe { namespace world {

struct Vec4 { float x,y,z,w; };

void fn_0x5a05e0(void* self, const Vec4& v) {
    Vec4* dst = (Vec4*)((char*)self + 0x2c);
    float w = v.w, z = v.z, y = v.y, x = v.x;
    *(volatile float*)&dst->x = x;
    dst->y = y;
    dst->z = z;
    dst->w = w;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_setTransparencyGraph_dice_hfe_Vec4_constref (0x5a05e0)
