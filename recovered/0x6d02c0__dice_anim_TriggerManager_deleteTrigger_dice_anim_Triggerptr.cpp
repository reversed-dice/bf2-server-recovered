// FUNCTION: BF2 0x6d02c0
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class Trigger {
public:
    char m_pad0[0x20];
    std::vector<Trigger*> m_children;
};

class TriggerManager {
public:
    ~TriggerManager();
    std::map<std::string, Trigger*, dice::hfe::NoCaseStringCompare> m_triggers;
    std::string* getName(Trigger const* t) const;
    void deleteTrigger(Trigger* t);
};

} }

void dice::anim::TriggerManager::deleteTrigger(dice::anim::Trigger* t)
{
    if (t == 0)
        return;
    for (std::map<std::string, dice::anim::Trigger*, dice::hfe::NoCaseStringCompare>::iterator it = m_triggers.begin();
         it != m_triggers.end(); ++it) {
        dice::anim::Trigger* x = it->second;
        ((void (*)(void*, dice::anim::Trigger*))(*(void***)x)[0x70 / 8])(x, t);
    }
    while (!t->m_children.empty()) {
        dice::anim::Trigger* c = t->m_children.front();
        ((void (*)(void*, dice::anim::Trigger*))(*(void***)t)[0x70 / 8])(t, c);
        deleteTrigger(c);
    }
    m_triggers.erase(*getName(t));
    ((void (*)(void*))(*(void***)t)[0x8 / 8])(t);
}
