// FUNCTION: BF2 0x518960
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice {
namespace hfe {
namespace world {

struct RopeNode {
    char pad[0x29];
    bool m_fixed;
    char pad2[0x2c - 0x29 - 1];
};

class GrapplingHookRope {
public:
    char pad[0x258];
    std::vector<RopeNode> m_nodes; // 0x258
    char pad2[0x2f0 - 0x258 - sizeof(std::vector<RopeNode>)];
    bool m_2f0; // 0x2f0
    char pad3[0x318 - 0x2f0 - 1];
    float m_318; // 0x318
    bool m_31c;  // 0x31c
    char pad4[3];
    float m_320; // 0x320

    void setAwake();
};

void GrapplingHookRope::setAwake() {
    m_31c = true;
    m_2f0 = false;
    m_320 = 0;
    m_318 = 0;
    std::vector<RopeNode>& v = m_nodes;
    for (RopeNode* cur = &v.front(); cur != &v.back() + 1; ++cur) {
        cur->m_fixed = false;
    }
}

}
}
}
