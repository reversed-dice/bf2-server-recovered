// FUNCTION: BF2 0x73e270
namespace dice { namespace hfe {

class System {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual double getTime();
};

extern System* g_system;

class LoadStat {
public:
    void registerLoadCallback(void* cb);
    void* m_0;      // +0x0
    char m_pad[0x28];
    float m_30;     // +0x30
};

void LoadStat::registerLoadCallback(void* cb)
{
    if (m_0 == 0) {
        float t = (float)g_system->getTime();
        m_30 = t;
    }
    m_0 = cb;
}

}}
