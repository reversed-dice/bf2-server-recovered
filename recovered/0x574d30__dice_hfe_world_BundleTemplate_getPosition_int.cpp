// FUNCTION: BF2 0x574d30
#include <vector>

namespace dice { namespace hfe {

class Vec3 {
public:
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float vx, float vy, float vz) : x(vx), y(vy), z(vz) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

struct Xform { char pad_0x00[0x4c]; Vec3 m_position; };

class BundleTemplate {
public:
    char pad_0x000[0x1d8];
    std::vector<Xform*> m_positions;
    Vec3 getPosition(int index);
};

Vec3 BundleTemplate::getPosition(int index) {
    if (index < 0 || index >= (int)m_positions.size()) {
        return Vec3(0.0f, 0.0f, 0.0f);
    }
    return m_positions[index]->m_position;
}

} } }
