// FUNCTION: BF2 0x6cd930
// BF2_FLAGS: -fcrossjumping
#include <vector>

namespace dice { namespace anim {

class Trigger {
public:
    char _pad[0x20];
    std::vector<Trigger*> m_children; // +0x20
    char _pad2[0x40 - 0x38];
    bool m_flag40;

    void removeChildByPtr(Trigger* child);
};

void Trigger::removeChildByPtr(Trigger* child) {
    if (!child) return;
    for (std::vector<Trigger*>::iterator it = m_children.begin(); it != m_children.end(); ++it) {
        if (*it == child) {
            child->m_flag40 = false;
            m_children.erase(it);
            return;
        }
    }
}

} }
