// FUNCTION: BF2 0x6251a0
class IObject;

class FollowRef {
public:
    char _pad0[0x8];
    IObject* m_object;
};

class DefaultFollowComp {
public:
    char _pad0[0x40];
    FollowRef* m_ref;
    unsigned int m_tick;
    void updateComponent(float dt, unsigned int now);
    void followTarget(IObject* target);
};

class WorldPref {
public:
    static int getTickCount();
};

void DefaultFollowComp::updateComponent(float dt, unsigned int now) {
    if (!m_ref) return;
    if (!m_ref->m_object) return;
    if (m_tick > (unsigned int)WorldPref::getTickCount()) return;
    followTarget(m_ref ? m_ref->m_object : 0);
}
