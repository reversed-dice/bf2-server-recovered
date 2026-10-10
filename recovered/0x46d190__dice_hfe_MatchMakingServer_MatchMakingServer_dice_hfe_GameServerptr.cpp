// FUNCTION: BF2 0x46d190
// BF2_FLAGS: -fno-strict-aliasing
#include <new>
#include <list>

namespace dice { namespace hfe {

class GameServer;

struct MMImpl {
    GameServer* m_gs;            // +0x00
    unsigned long long m_unk08;  // +0x08
    std::list<void*> m_list;     // +0x10
    unsigned char m_flag;        // +0x20
    int m_n;                     // +0x24
    int m_unk28;                 // +0x28
    MMImpl(GameServer* gs) : m_gs(gs), m_unk08(0), m_flag(0), m_n(0x1e), m_unk28(0) {}
};

class MatchMakingServer {
public:
    MatchMakingServer(GameServer* gs);
};

MatchMakingServer::MatchMakingServer(GameServer* gs) {
    *(MMImpl**)this = new MMImpl(gs);
}

}}
