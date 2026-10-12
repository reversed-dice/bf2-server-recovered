// FUNCTION: BF2 0x626330

namespace dice { namespace hfe {

class IObject;

class WorldPref
{
public:
    static unsigned int getTickCount();
};

namespace world {

class WeakRef
{
public:
    unsigned char m_pad[0x8];
    IObject* m_object;
};

class PreDestinedFollowComp
{
public:
    unsigned char m_pad0[0x38];
    WeakRef* m_ref;
    int m_timeStamp;

    void followTarget(IObject* object, float dt);
    void updateComponent(float dt, unsigned int timeStamp);
};

void PreDestinedFollowComp::updateComponent(float dt, unsigned int timeStamp)
{
    if (m_ref == 0)
        return;
    if (m_ref->m_object == 0)
        return;
    if ((unsigned int)m_timeStamp > WorldPref::getTickCount())
        return;
    followTarget(m_ref ? m_ref->m_object : 0, dt);
}

} } }
