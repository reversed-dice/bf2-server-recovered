// FUNCTION: BF2 0x6b1770
#include <string>

namespace dice { namespace anim {

class AnimationSystem;

class Trigger {
public:
    virtual ~Trigger();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void apply(AnimationSystem* sys);
};

class TriggerManager {
public:
    Trigger* getTriggerByName(const std::string& name, bool b) const;
};

class TriggerHolder {
public:
    char _pad[0x8];
    TriggerManager* m_manager;
};

class AnimationSystem {
public:
    char _pad[0x50];
    TriggerHolder* m_holder;
    char _pad2[0x18];
    unsigned char m_70;
    unsigned char m_71;
    unsigned char m_72;
    unsigned char m_73;
    bool playPostTrigger(const std::string& name, bool b);
};

bool AnimationSystem::playPostTrigger(const std::string& name, bool b) {
    if (m_72 != 0)
        return false;
    if (m_73 != 0)
        return false;
    Trigger* t = m_holder->m_manager->getTriggerByName(name, 0);
    if (t == 0)
        return false;
    m_70 = 1;
    t->apply(this);
    m_70 = 0;
    m_72 = b;
    return true;
}

}}
