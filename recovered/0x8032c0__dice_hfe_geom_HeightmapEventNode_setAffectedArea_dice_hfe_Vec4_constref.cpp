namespace dice { namespace hfe { namespace geom {

struct Vec4 { float x,y,z,w; };

void fn_0x8032c0(void* self, const Vec4& v) {
    Vec4* dst = (Vec4*)((char*)self + 0x2c);
    float w = v.w, z = v.z, y = v.y, x = v.x;
    *(volatile float*)&dst->x = x;
    dst->y = y;
    dst->z = z;
    dst->w = w;
}

} } }
// REVERSED_FUNCTION: dice_hfe_geom_HeightmapEventNode_setAffectedArea_dice_hfe_Vec4_constref (0x8032c0)
