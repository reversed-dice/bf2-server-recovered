// FUNCTION: BF2 0x78ddb0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <algorithm>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

class AIObjectPrimaryShared {
public:
    virtual void dummy();
    char _pad[0x70 - 8];
    std::vector<IAIObject*> m_secondaryObjects;
    bool m_flag;

    virtual void unregisterSecondaryPosition(IAIObject* obj);
};

void AIObjectPrimaryShared::unregisterSecondaryPosition(IAIObject* obj)
{
    if (!m_flag) {
        std::vector<IAIObject*>::iterator it = std::find(m_secondaryObjects.begin(), m_secondaryObjects.end(), obj);
        if (it != m_secondaryObjects.end()) {
            m_secondaryObjects.erase(it);
        }
    }
}

} } }
