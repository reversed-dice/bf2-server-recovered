// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x562d00
#include <set>

namespace dice { namespace hfe { namespace world {

class Triggerable;

class TriggerableManager {
public:
    virtual ~TriggerableManager();
    char _pad[0x80 - 8];
    std::set<Triggerable*> m_active; // 0x80

    bool alreadyActive(Triggerable* triggerable);
};

bool TriggerableManager::alreadyActive(Triggerable* triggerable)
{
    for (std::set<Triggerable*>::const_iterator it = m_active.begin(); it != m_active.end(); ++it) {
        if (*it == triggerable)
            return true;
    }
    return false;
}

} } }
