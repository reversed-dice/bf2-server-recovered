// FUNCTION: BF2 0x46cfd0
#include <list>

namespace dice { namespace hfe {

class MMBackend {
public:
    virtual void _v0();
    virtual void shutdown();
};

struct MatchMakingServerImpl {
    char pad[0x10];
    std::list<MMBackend*> m_backends;
};

class MatchMakingServer {
public:
    bool shutdownServices();

private:
    MatchMakingServerImpl* m_impl;
};

bool MatchMakingServer::shutdownServices()
{
    for (std::list<MMBackend*>::iterator it = m_impl->m_backends.begin(); it != m_impl->m_backends.end(); ++it) {
        if (*it) {
            (*it)->shutdown();
        }
    }
    m_impl->m_backends.clear();
    return true;
}

} }
