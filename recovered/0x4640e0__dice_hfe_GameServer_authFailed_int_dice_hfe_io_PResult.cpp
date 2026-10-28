// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4640e0
#include <map>
#include <string>

namespace dice { namespace hfe {

namespace io {
enum PResult { PRESULT_NONE = 0 };
}

struct DisconnectType {
    int a;
    int b;
    std::string s;
    DisconnectType() {}
    DisconnectType(int aa, int bb, std::string const& ss) : a(aa), b(bb), s(ss) {}
};

typedef std::map<int, DisconnectType> DisconnectMap;

class GameServer {
public:
    char _pad[0xb8];
    DisconnectMap m_disconnects;
    void* getClient(int) const;
    void authFailed(int, io::PResult);
};

void GameServer::authFailed(int playerId, io::PResult result)
{
    if (getClient(playerId) == 0)
        return;
    m_disconnects[playerId] = DisconnectType(playerId, result, "");
}

} }
