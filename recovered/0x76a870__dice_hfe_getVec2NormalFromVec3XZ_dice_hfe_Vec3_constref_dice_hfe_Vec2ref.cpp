// FUNCTION: BF2 0x76a870
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };
Vec2* cb_76a870(Vec3* v, Vec2* out) {
    out->x = v->z;
    out->y = -v->x;
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_getVec2NormalFromVec3XZ_dice_hfe_Vec3_constref (0x76a870)
