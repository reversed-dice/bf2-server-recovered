// FUNCTION: BF2 0x46d060
#include <list>

namespace dice { namespace hfe {

struct Result;

struct MMBackend {
    virtual void addRef();         // slot 0
    virtual void getRef();         // slot 1
    virtual bool isValid();        // slot 2
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual Result* getResult();   // slot 6
};

struct MatchMakingServerImpl {
    char m_pad0[0x8];
    Result* m_result;
    std::list<MMBackend*> m_backends;
};

void addBackend(MMBackend* backend, MatchMakingServerImpl* self) {
    if (!backend->isValid()) {
        backend->getRef();
        return;
    }
    self->m_backends.push_back(backend);
    if (backend->getResult())
        self->m_result = backend->getResult();
}

} }
