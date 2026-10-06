// FUNCTION: BF2 0x78e590
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

class AIObjectPrimaryShared {
public:
    virtual void dummy();
    char _pad[0x70 - 8];
    std::vector<IAIObject*> m_secondaryObjects;

    virtual void registrateSecondaryPosition(IAIObject* obj);
};

void AIObjectPrimaryShared::registrateSecondaryPosition(IAIObject* obj)
{
    m_secondaryObjects.push_back(obj);
}

} } }
