// FUNCTION: BF2 0x6d0240
#include <string>

namespace dice { namespace anim {

class Trigger {
public:
    virtual ~Trigger();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void activate();
};

class TriggerManager {
public:
    char _pad[0x30];
    Trigger* m_activeTrigger; // +0x30

    Trigger* getTriggerByName(const std::string& name, bool b) const;
    void setActiveTrigger(const std::string& name, Trigger* trigger);
};

void TriggerManager::setActiveTrigger(const std::string& name, Trigger* trigger) {
    if (trigger) {
        m_activeTrigger = trigger;
    } else {
        m_activeTrigger = getTriggerByName(name, 0);
    }
    if (m_activeTrigger) {
        m_activeTrigger->activate();
    }
}

} }
