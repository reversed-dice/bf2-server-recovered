// FUNCTION: BF2 0x567890
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <set>

namespace dice { namespace hfe { namespace world {

class Trigger;

struct TriggerManager {
    unsigned char _pad0[0x08];
    std::list<Trigger*> m_triggers;                       // 0x08
    std::set<Trigger*> m_links;                           // 0x20
    std::list<Trigger*>::iterator m_it;                   // 0x48

    void removeTrigger(Trigger* trigger);
};

void TriggerManager::removeTrigger(Trigger* trigger)
{
    std::list<std::list<Trigger*>::iterator> deadTriggers;
    std::list<std::set<Trigger*>::const_iterator> deadLinks;

    for (std::list<Trigger*>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it) {
        if (*it != trigger)
            continue;
        for (std::set<Trigger*>::const_iterator link = m_links.begin(); link != m_links.end(); ++link) {
            if (*link == trigger)
                deadLinks.push_back(link);
        }
        deadTriggers.push_back(it);
    }

    for (std::list<std::list<Trigger*>::iterator>::iterator d = deadTriggers.begin(); d != deadTriggers.end(); ++d)
        m_triggers.erase(*d);

    for (std::list<std::set<Trigger*>::const_iterator>::iterator d = deadLinks.begin(); d != deadLinks.end(); ++d)
        m_links.erase(*d);

    m_it = m_triggers.begin();
}

} } }
