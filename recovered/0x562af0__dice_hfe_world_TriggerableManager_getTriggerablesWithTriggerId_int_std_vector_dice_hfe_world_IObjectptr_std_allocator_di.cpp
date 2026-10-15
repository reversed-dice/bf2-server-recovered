// FUNCTION: BF2 0x562af0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;

class Triggerable {
public:
    int getTriggerId() const;
};

class TriggerableManager {
public:
    bool getTriggerablesWithTriggerId(int id, std::vector<IObject*>& out);
private:
    char m_pad0[0x8];
    std::list<Triggerable*> m_triggerables;
};

bool TriggerableManager::getTriggerablesWithTriggerId(int id, std::vector<IObject*>& out) {
    for (std::list<Triggerable*>::iterator it = m_triggerables.begin(); it != m_triggerables.end(); ++it) {
        Triggerable* t = *it;
        if (t->getTriggerId() == id) {
            IObject* o = (IObject*)((void* (*)(void*, int))(*(void***)t)[3])(t, *(int*)0xc7d110);
            out.push_back(o);
        }
    }
    return !out.empty();
}

}}}
