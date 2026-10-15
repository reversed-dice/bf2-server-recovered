// FUNCTION: BF2 0x563770
#include <list>
#include <map>
#include <set>
#include <string>

namespace dice { namespace hfe { namespace world {

class Triggerable;
class TriggerableTemplate;
class TriggerableTarget;
class TriggerableTargetTemplate;

class TriggerableTarget {
public:
    std::string getName();
};

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

    TriggerableTarget* getTriggerableTargetByName(std::string name);
};

TriggerableManager* TriggerableManager::m_instance;

TriggerableTarget* TriggerableManager::getTriggerableTargetByName(std::string name)
{
    for (std::list<TriggerableTarget*>::iterator it = m_triggerableTargets.begin(); it != m_triggerableTargets.end(); ++it)
    {
        TriggerableTarget* target = *it;
        int c = target->getName().compare(name);
        if (c == 0)
            return target;
    }
    return 0;
}

} } }
