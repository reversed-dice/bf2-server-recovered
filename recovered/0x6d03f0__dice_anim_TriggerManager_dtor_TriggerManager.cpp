// FUNCTION: BF2 0x6d03f0
#include <map>

namespace dice { namespace anim {

class Trigger {
public:
    virtual ~Trigger();
};

class TriggerManager {
public:
    std::map<int, Trigger*> m_triggers;
    ~TriggerManager();
};

TriggerManager::~TriggerManager()
{
    for (std::map<int, Trigger*>::iterator it = m_triggers.begin();
         it != m_triggers.end(); ++it)
        delete it->second;
}

} }
// REVERSED_FUNCTION: dice_anim_TriggerManager_dtor_TriggerManager (0x6d03f0)
