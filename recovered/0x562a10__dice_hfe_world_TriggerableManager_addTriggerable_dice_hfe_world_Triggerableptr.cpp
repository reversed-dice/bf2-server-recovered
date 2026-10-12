// FUNCTION: BF2 0x562a10
#include <list>
#include <map>

namespace dice { namespace hfe { namespace world {

class Triggerable {
public:
    int getTriggerId() const;
};

class TriggerableManager {
public:
    void addTriggerable(Triggerable* t);
private:
    char m_pad0[0x8];
    std::list<Triggerable*> m_triggerables;
    char m_pad1[0x30];
    std::map<int, Triggerable*> m_map;
};

void TriggerableManager::addTriggerable(Triggerable* t) {
    m_triggerables.push_back(t);
    m_map[t->getTriggerId()] = t;
}

}}}
