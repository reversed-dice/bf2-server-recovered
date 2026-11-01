// BF2_FLAGS: -fno-gcse
// from api 61.76%
// FUNCTION: BF2 0x5aff50

#include <vector>

extern "C" float sqrtf(float);

namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

struct RepairPoint {
    Vec3 pos;
    float radius;
};

class ArmorGLCompTemplate {
public:
    char _pad[0x1f0];
    std::vector<RepairPoint> m_repairPoints;
};

class ArmorGLComp {
public:
    char _pad[0x10];
    ArmorGLCompTemplate* m_template; // +0x10

    bool isInsideRepairRadius(const Vec3& pos) const;
};

bool ArmorGLComp::isInsideRepairRadius(const Vec3& pos) const {
    const std::vector<RepairPoint>& pts = m_template->m_repairPoints;
    if (pts.empty())
        return true;

    for (int i = 0; i < (int)pts.size(); ++i) {
        float dx = pos.x - pts[i].pos.x;
        float dy = pos.y - pts[i].pos.y;
        float dz = pos.z - pts[i].pos.z;
        float dist = sqrtf(dx * dx + dy * dy + dz * dz);
        if (pts[i].radius >= dist)
            return true;
    }
    return false;
}

}
}
}
