// FUNCTION: BF2 0x6d01e0
#include <map>

namespace dice { namespace anim {

class Bundle;

class TriggerManager {
public:
    void removeBundleFromAllTriggers(Bundle* b);
    std::map<int, void*> m_triggers;
};

void TriggerManager::removeBundleFromAllTriggers(Bundle* b)
{
    for (std::map<int, void*>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it)
        ((void (*)(void*, Bundle*))(*(void***)it->second)[0x90 / 8])(it->second, b);
}

} }
