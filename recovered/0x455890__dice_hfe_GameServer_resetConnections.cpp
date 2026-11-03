// FUNCTION: BF2 0x455890
#include <map>

namespace dice { namespace hfe {
class GhostManager { public: void reset(); };
struct Conn {
    char pad[0x1c];
    unsigned char flag1c;   // +0x1c
    char pad2[0x40-0x1d];
    GhostManager* ghost;    // +0x40
};
class GameServer {
public:
    void resetConnections();
    char pad[0xe8];
    std::map<long, Conn*> m_conns;   // +0xf0
};
void GameServer::resetConnections()
{
    for (std::map<long, Conn*>::iterator it = m_conns.begin(); it != m_conns.end(); ++it) {
        it->second->flag1c = 0;
        it->second->ghost->reset();
    }
}
}}
