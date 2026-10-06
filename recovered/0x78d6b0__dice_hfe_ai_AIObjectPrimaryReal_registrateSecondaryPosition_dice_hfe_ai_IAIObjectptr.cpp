// FUNCTION: BF2 0x78d6b0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

class AIObjectPrimaryReal {
public:
    virtual void dummy();
    char _pad[0x78 - 8];
    std::vector<IAIObject*> m_secondaryObjects;

    virtual void registrateSecondaryPosition(IAIObject* obj);
};

void AIObjectPrimaryReal::registrateSecondaryPosition(IAIObject* obj)
{
    m_secondaryObjects.push_back(obj);
}

} } }
