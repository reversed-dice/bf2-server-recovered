// FUNCTION: BF2 0x6cfeb0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace anim {

class Trigger {
public:
    char _pad[0x40];
    char m_flag; // +0x40
};

void setPriosForTrigger(Trigger* trig, int& prio);

class TriggerManager {
public:
    std::map<int, Trigger*> m_triggers;

    void setPriosForTriggers();
};

void TriggerManager::setPriosForTriggers() {
    int prio = 0;
    for (std::map<int, Trigger*>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it) {
        Trigger* t = it->second;
        if (!t->m_flag) {
            setPriosForTrigger(t, prio);
        }
    }
}

} }
