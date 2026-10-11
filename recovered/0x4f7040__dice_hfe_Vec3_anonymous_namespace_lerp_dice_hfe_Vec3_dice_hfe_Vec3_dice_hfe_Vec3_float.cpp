// FUNCTION: BF2 0x4f7040
namespace dice { namespace hfe {
struct Vec3 { float x; float y; float z; };
void* fn_0x4f7040(void* sret, Vec3 const& a, Vec3 const& b, float t) {
    float u = 1.0f - t;
    Vec3 r;
    r.z = t * b.z + u * a.z;
    r.y = t * b.y + u * a.y;
    r.x = u * a.x + t * b.x;
    *(Vec3*)sret = r;
    return sret;
}
} }
