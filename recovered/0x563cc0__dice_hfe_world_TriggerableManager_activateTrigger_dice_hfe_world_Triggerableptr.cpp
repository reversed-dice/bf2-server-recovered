// FUNCTION: BF2 0x563cc0
#include <set>

namespace dice { namespace hfe { namespace world {

class Triggerable {
public:
    void resetTriggerTargets();
};

class TriggerableManager {
public:
    char m_pad[0x80];
    std::set<Triggerable*> m_active;   // +0x80

    bool alreadyActive(Triggerable* t) const;
    void activateTrigger(Triggerable* t);
};

void TriggerableManager::activateTrigger(Triggerable* t)
{
    if (!alreadyActive(t))
    {
        m_active.insert(t);
        t->resetTriggerTargets();
    }
}

}}}
