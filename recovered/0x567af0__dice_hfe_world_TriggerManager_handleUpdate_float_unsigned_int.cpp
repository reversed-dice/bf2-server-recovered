// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x567af0
#include <list>
#include <set>

namespace dice { namespace hfe { namespace world {

class Trigger {
public:
    bool checkTriggerArea();
    unsigned int getTypes() const;
    void updateOnTime();
};

class TriggerManager {
public:
    char m_pad0[8];
    std::list<Trigger*> m_triggers;
    std::set<Trigger*> m_active;
    std::list<Trigger*>::iterator m_cursor;

    void handleUpdate(float dt, unsigned int flags);
};

void TriggerManager::handleUpdate(float dt, unsigned int flags) {
    if (m_cursor == m_triggers.end())
        m_cursor = m_triggers.begin();
    std::list<Trigger*> toAdd;
    std::list<Trigger*> spare;
    for (int i = 0; i < 3 && m_cursor != m_triggers.end(); i++) {
        Trigger* t = *m_cursor;
        if (m_active.find(t) == m_active.end()) {
            if (t->checkTriggerArea()) {
                toAdd.push_back(t);
                if ((t->getTypes() & 1) || (t->getTypes() & 4))
                    t->updateOnTime();
            }
        }
        ++m_cursor;
    }
    std::list<Trigger*> toRemove;
    for (std::set<Trigger*>::iterator it = m_active.begin(); it != m_active.end(); ++it) {
        Trigger* t = *it;
        if (!t->checkTriggerArea()) {
            toRemove.push_back(t);
        } else if ((t->getTypes() & 1) || (t->getTypes() & 4)) {
            t->updateOnTime();
        }
    }
    for (std::list<Trigger*>::iterator it = toAdd.begin(); it != toAdd.end(); ++it)
        m_active.insert(*it);
    for (std::list<Trigger*>::iterator it = toRemove.begin(); it != toRemove.end(); ++it)
        m_active.erase(*it);
}

} } }
