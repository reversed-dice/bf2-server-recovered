// FUNCTION: BF2 0x76a820
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };
Vec2* vec3ToVec2XY_0x76a820(const Vec3* src, Vec2* out) {
    out->x = src->x;
    out->y = src->y;
    return out;
}
} }
