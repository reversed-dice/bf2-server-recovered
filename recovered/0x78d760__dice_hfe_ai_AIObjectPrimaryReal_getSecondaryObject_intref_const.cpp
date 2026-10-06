// FUNCTION: BF2 0x78d760
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

class AIObjectPrimaryReal {
public:
    virtual void dummy();
    char _pad[0x78 - 8];
    std::vector<IAIObject*> m_secondaryObjects;

    virtual IAIObject* getSecondaryObject(int& it) const;
};

IAIObject* AIObjectPrimaryReal::getSecondaryObject(int& it) const
{
    if (it >= 0 && it < (int)m_secondaryObjects.size()) {
        return m_secondaryObjects[it++];
    }
    it = -1;
    return 0;
}

} } }
