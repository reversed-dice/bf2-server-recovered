// FUNCTION: BF2 0x46d030
namespace std {

template<typename T> class list {
public:
    void clear();
};

}

void operator delete(void*) throw();

namespace dice { namespace hfe {

class MMBackend;

class MatchMakingServer {
public:
    ~MatchMakingServer();
    void shutdownServices();
};

MatchMakingServer::~MatchMakingServer() {
    shutdownServices();
    if (void* p = *reinterpret_cast<void**>(this)) {
        reinterpret_cast<std::list<MMBackend*>*>(
            static_cast<char*>(p) + 0x10)->clear();
        operator delete(p);
    }
}

} }
// REVERSED_FUNCTION: dice::hfe::MatchMakingServer::dtor_MatchMakingServer (0x46d030)