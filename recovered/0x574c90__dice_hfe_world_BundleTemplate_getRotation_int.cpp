// FUNCTION: BF2 0x574c90
#include <vector>

namespace dice { namespace hfe {

struct Mat4 { float m[16]; };

struct Xform { char pad_0x00[0x1c]; Mat4 m; };

void getRotationZXY(const Mat4& m, float& a, float& b, float& c);

class Vec3 {
public:
    float x;
    float y;
    float z;
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    Vec3(float vx, float vy, float vz) : x(vx), y(vy), z(vz) {}
};

namespace world {

class BundleTemplate {
public:
    char pad_0x000[0x1d8];
    std::vector<Xform*> m_rotations;
    Vec3 getRotation(int index);
};

Vec3 BundleTemplate::getRotation(int index) {
    if (index < 0 || index >= (int)m_rotations.size()) {
        return Vec3(0.0f, 0.0f, 0.0f);
    }
    float cz;
    float cy;
    float cx;
    getRotationZXY(m_rotations[index]->m, cz, cy, cx);
    return Vec3(-cx, -cy, -cz);
}

} } }
