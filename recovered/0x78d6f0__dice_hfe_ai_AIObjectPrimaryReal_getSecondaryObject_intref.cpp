// FUNCTION: BF2 0x78d6f0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

class AIObjectPrimaryReal {
public:
    virtual void dummy();
    char _pad[0x78 - 8];
    std::vector<IAIObject*> m_secondaryObjects;

    virtual IAIObject* getSecondaryObject(int& it);
};

IAIObject* AIObjectPrimaryReal::getSecondaryObject(int& it)
{
    if (it >= 0 && it < (int)m_secondaryObjects.size()) {
        return m_secondaryObjects[it++];
    }
    it = -1;
    return 0;
}

} } }
