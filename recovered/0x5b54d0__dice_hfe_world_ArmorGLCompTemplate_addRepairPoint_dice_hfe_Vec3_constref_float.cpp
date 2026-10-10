// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5b54d0
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

struct RepairPoint {
    Vec3 pos;
    float radius;
    RepairPoint() {}
};

class ArmorGLCompTemplate {
public:
    virtual ~ArmorGLCompTemplate();
    char _pad[0x1e8];
    std::vector<RepairPoint> m_repairPoints;

    void addRepairPoint(Vec3 const& pos, float radius);
};

void ArmorGLCompTemplate::addRepairPoint(Vec3 const& pos, float radius) {
    m_repairPoints.resize(m_repairPoints.size() + 1);
    m_repairPoints[m_repairPoints.size() - 1].pos = pos;
    m_repairPoints[m_repairPoints.size() - 1].radius = radius;
}

} } }
