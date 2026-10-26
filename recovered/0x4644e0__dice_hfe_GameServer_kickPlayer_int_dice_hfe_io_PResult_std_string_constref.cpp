// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4644e0
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

class BanList {
public:
    void alertOnKicked(int);
};

extern BanList* banList;

class GameServer {
public:
    char _pad[0xb8];
    DisconnectMap m_disconnects;
    void* getClient(int) const;
    void kickPlayer(int, io::PResult, std::string const&);
};

void GameServer::kickPlayer(int playerId, io::PResult result, std::string const& reason)
{
    banList->alertOnKicked(playerId);
    if (getClient(playerId) == 0)
        return;
    DisconnectType dt(playerId, result, reason);
    m_disconnects[playerId] = dt;
}

} }

// REVERSED_FUNCTION: dice_hfe_GameServer_kickPlayer_int_dice_hfe_io_PResult_std_string_constref (0x4644e0)
