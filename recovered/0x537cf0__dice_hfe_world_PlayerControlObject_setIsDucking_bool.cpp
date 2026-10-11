// FUNCTION: BF2 0x537cf0
namespace dice { namespace hfe {

class EventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void postEvent(int a, int b, void* sender, float delay);
};

extern EventManager* eventManager;

namespace world {

class Soldier {
public:
    void disableInverseKinematic(bool b);
};

class IComp {
public:
    virtual void v0();
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
    virtual void setFlag(bool b);
};

class PlayerControlObject {
public:
    char _pad0[0x270];
    void* m_270;
    char _pad1[0x410 - 0x278];
    IComp* m_410;
    char _pad2[0x4c0 - 0x418];
    bool m_ducking;

    void setIsDucking(bool ducking);
};

void PlayerControlObject::setIsDucking(bool ducking) {
    if (m_ducking == ducking) {
        return;
    }
    m_ducking = ducking;
    eventManager->postEvent(2, 0x1f, this, 0.0f);
    if (m_ducking) {
        ((void (*)(void*, int))(*(void***)this)[0x380 / 8])(this, 1);
        if (m_410) {
            m_410->setFlag(true);
        }
    } else {
        ((void (*)(void*, int))(*(void***)this)[0x380 / 8])(this, 0);
        if (m_410) {
            m_410->setFlag(false);
        }
    }
    if (m_270) {
        Soldier* s = (Soldier*)*(void**)((char*)m_270 + 8);
        if (s) {
            s->disableInverseKinematic(m_ducking);
        }
    }
}

} } }
