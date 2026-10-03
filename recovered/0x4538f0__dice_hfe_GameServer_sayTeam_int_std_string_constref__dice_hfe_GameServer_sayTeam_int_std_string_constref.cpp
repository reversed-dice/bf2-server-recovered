// FUNCTION: BF2 0x4538f0
#include <string>

namespace dice { namespace hfe {

class GameServer {
public:
    unsigned char sayTeam(int, const std::string&);
};

unsigned char GameServer::sayTeam(int teamId, const std::string& msg) {
    reinterpret_cast<void (*)(GameServer*, int)>((*reinterpret_cast<long**>(this))[0x11])(this, teamId);
    return reinterpret_cast<unsigned char (*)(GameServer*, const std::string&, unsigned int, unsigned int, unsigned int, unsigned int)>((*reinterpret_cast<long**>(this))[0x4b])(this, msg, 0xd, 1, 0, *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x70));
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_sayTeam_int_std_string_constref (0x4538f0)