// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6b3cb0
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
    virtual ~AnimationSystem();
    unsigned int m_pose;      // +0x8
    char _pad2[0xc];
    float m_18;               // +0x18
    char _pad3[0x4];
    float m_20;               // +0x20
    float m_24;               // +0x24
    char _pad4[0x28];
    TriggerHolder* m_holder;  // +0x50

    void stopAllPlaying();
    void setTriggerPose(unsigned int pose);
};

static inline Trigger* pick(TriggerManager* m, std::string n) {
    return m->getTriggerByName(n, true);
}

void AnimationSystem::setTriggerPose(unsigned int pose) {
    if (m_pose == pose)
        return;
    Trigger* t = 0;
    if (pose == 2) {
        if (m_24 > 2.0f) {
            if (-0.5f > m_20) {
                t = pick(m_holder->m_manager, "backwardToProne");
            } else if (m_18 > 0.5f) {
                t = pick(m_holder->m_manager, "rightToProne");
            } else if (-0.5f > m_18) {
                t = pick(m_holder->m_manager, "leftToProne");
            } else {
                t = pick(m_holder->m_manager, "forwardToProne");
            }
        } else {
            t = pick(m_holder->m_manager, "stillToProne");
        }
    }
    if (m_pose == 2) {
        t = pick(m_holder->m_manager, "fromProne");
    }
    if (t) {
        stopAllPlaying();
        t->apply(this);
    }
    m_pose = pose;
}

}}
