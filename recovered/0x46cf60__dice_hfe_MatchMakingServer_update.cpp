// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x46cf60
#include <list>
namespace dice { namespace hfe {

class MMBackend {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void update();
};

class ServerQueryCache {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void update();
};
extern ServerQueryCache* serverQueryCache;

class MatchMakingServerImpl {
public:
    void* m_0;
    void* m_8;
    struct Head { std::_List_node_base* next; std::_List_node_base* prev; } m_backends;
    bool m_lan;
    int m_queryInterval;
    int m_queryCounter;
};

class MatchMakingServer {
public:
    void update();
    MatchMakingServerImpl* m_impl;
};

void MatchMakingServer::update()
{
    if (++m_impl->m_queryCounter == m_impl->m_queryInterval) {
        m_impl->m_queryCounter = 0;
        serverQueryCache->update();
    }
    for (std::list<MMBackend*>::iterator it(m_impl->m_backends.next); it != std::list<MMBackend*>::iterator((std::_List_node_base*)&m_impl->m_backends); ++it)
        (*it)->update();
}

} }
// REVERSED_FUNCTION: dice::hfe::MatchMakingServer::update (0x46cf60)
