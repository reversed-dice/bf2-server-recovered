// FUNCTION: BF2 0x562780
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <set>

namespace dice { namespace hfe { namespace world {

class Triggerable;
class TriggerableTemplate;
class TriggerableTarget;
class TriggerableTargetTemplate;

class TriggerableManager {
public:
    virtual ~TriggerableManager();

    static TriggerableManager* m_instance;

    std::list<Triggerable*> m_triggerables;                             // 0x08
    std::list<TriggerableTemplate*> m_triggerableTemplates;             // 0x18
    std::list<TriggerableTarget*> m_triggerableTargets;                 // 0x28
    std::list<TriggerableTargetTemplate*> m_targetTemplates;            // 0x38
    std::map<int, Triggerable*> m_map;                                  // 0x48
    std::list<Triggerable*>::iterator m_iter;                           // 0x78
    std::set<Triggerable*> m_active;                                    // 0x80
    std::set<TriggerableTarget*> m_targetSet;                           // 0xb8

    void removeTriggerable(Triggerable* triggerable);
};

void TriggerableManager::removeTriggerable(Triggerable* triggerable)
{
    std::list<std::list<Triggerable*>::iterator> deadTriggerables;
    std::list<std::set<Triggerable*>::const_iterator> deadLinks;

    for (std::list<Triggerable*>::iterator it = m_triggerables.begin(); it != m_triggerables.end(); ++it) {
        if (*it != triggerable)
            continue;
        for (std::set<Triggerable*>::const_iterator link = m_active.begin(); link != m_active.end(); ++link) {
            if (*link == triggerable)
                deadLinks.push_back(link);
        }
        deadTriggerables.push_back(it);
    }

    for (std::list<std::list<Triggerable*>::iterator>::iterator d = deadTriggerables.begin(); d != deadTriggerables.end(); ++d)
        m_triggerables.erase(*d);

    for (std::list<std::set<Triggerable*>::const_iterator>::iterator d = deadLinks.begin(); d != deadLinks.end(); ++d)
        m_active.erase(*d);

    m_iter = m_triggerables.begin();
}

} } }
