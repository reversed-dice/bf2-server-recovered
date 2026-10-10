// FUNCTION: BF2 0x73e1a0
// BF2_FLAGS: -fno-strict-aliasing
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

namespace {
extern double nextCallTime;
extern double secondsBetweenUpdate;
}

class LoadStat {
public:
    void executeLoadCallback();
    void (*m_0)();          // +0x0
    void (*m_8)();          // +0x8
    bool m_10;              // +0x10
    char m_pad11;
    bool m_12;              // +0x12
};

void LoadStat::executeLoadCallback()
{
    if (m_12 != 0)
        return;
    if (g_system == 0)
        return;
    if (m_0 == 0)
        return;
    if (m_10 != 0)
        return;
    if (m_8 != 0)
        m_8();
    double now = g_system->getTime();
    if (nextCallTime > now)
        return;
    m_12 = 1;
    nextCallTime = g_system->getTime() + secondsBetweenUpdate;
    m_0();
    m_12 = 0;
}

}}
