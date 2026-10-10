// FUNCTION: BF2 0x518b30
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

struct RopeNode {
    char pad[0x1c];
    float m_forceY;
    char pad2[0x29 - 0x1c - 4];
    bool m_fixed;
    char pad3[0x2c - 0x29 - 1];
};

class GrapplingHookRope {
public:
    char pad[0x258];
    std::vector<RopeNode> m_nodes;

    static Vec3 m_gravity;
    void applyForces();
};

void GrapplingHookRope::applyForces() {
    for (std::vector<RopeNode>::iterator it = m_nodes.begin(); it != m_nodes.end(); ++it) {
        if (!it->m_fixed) {
            it->m_forceY += m_gravity.y;
        }
    }
}

}
}
}
