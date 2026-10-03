// FUNCTION: BF2 0x76a840
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };
Vec2* vec3ToVec2YZ_0x76a840(const Vec3* src, Vec2* out) {
    out->x = src->y;
    out->y = src->z;
    return out;
}
} }
