// FUNCTION: BF2 0x6cd480
#include <vector>

namespace dice { namespace anim {

class AnimationSystem;
class Trigger;

class AnimationSystem {
public:
    void setFadeInTime(Trigger* t);
};

class Trigger {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual bool update(AnimationSystem& sys);
    char _pad0[0x18];
    std::vector<Trigger*> m_events;
    char _pad1[0x4];
    float m_fadeInTime;
};

bool Trigger::update(AnimationSystem& sys)
{
    if (m_fadeInTime > 0.0f)
        sys.setFadeInTime(this);
    for (std::vector<Trigger*>::iterator it = m_events.begin(); it != m_events.end(); ++it) {
        if (!(*it)->update(sys))
            return false;
    }
    ((void (*)(Trigger*, AnimationSystem&))(*(void***)this)[0xa0 / 8])(this, sys);
    return true;
}

} }
