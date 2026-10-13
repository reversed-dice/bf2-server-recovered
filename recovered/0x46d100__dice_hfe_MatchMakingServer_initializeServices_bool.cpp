// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x46d100
#include <list>
namespace dice { namespace hfe {

class MMBackend {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void update();
};

class MatchMakingServerImpl {
public:
    void* m_0;
    void* m_8;
    std::list<MMBackend*> m_backends;
    bool m_lan;
    int m_queryInterval;
    int m_queryCounter;
};

class GameSpyBackend : public MMBackend {
public:
    GameSpyBackend(MatchMakingServerImpl* impl);
    char _pad[0x50];
};

void addBackend(MMBackend* backend, MatchMakingServerImpl* impl);

class MatchMakingServer {
public:
    bool initializeServices(bool lan);
    MatchMakingServerImpl* m_impl;
};

bool MatchMakingServer::initializeServices(bool lan)
{
    if (m_impl->m_backends.size() != 0)
        return false;
    m_impl->m_lan = lan;
    MatchMakingServerImpl* impl = m_impl;
    addBackend(new GameSpyBackend(impl), impl);
    return m_impl->m_backends.size() != 0;
}

} }
