// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x563410
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

    std::list<Triggerable*> m_triggerables;
    std::list<TriggerableTemplate*> m_triggerableTemplates;
    std::list<TriggerableTarget*> m_triggerableTargets;
    std::list<TriggerableTargetTemplate*> m_triggerableTargetTemplates;
    std::map<int, Triggerable*> m_map;
    std::list<Triggerable*>::iterator m_iter;
    std::set<Triggerable*> m_active;
    std::set<Triggerable*>::iterator m_activeIter;
    std::set<TriggerableTarget*> m_targetSet;

    TriggerableManager();
};

TriggerableManager* TriggerableManager::m_instance;

TriggerableManager::TriggerableManager()
{
    m_instance = m_instance ? m_instance : this;
    m_iter = m_triggerables.begin();
}

} } }
