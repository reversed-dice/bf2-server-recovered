// FUNCTION: BF2 0x453890
#include <string>

namespace dice { namespace hfe {

class GameServer;

struct GameServer_say_Vtable {
    char _pad[0x258];
    unsigned char (*sayInternal)(GameServer*, std::string const&, unsigned int, unsigned int, int, unsigned int);
};

class GameServer {
public:
    char _pad_0x00[0x68];
    unsigned int m_unk_0x68;
    unsigned int m_unk_0x6C;
    unsigned int m_unk_0x70;

    unsigned char say(std::string const&);
};

unsigned char GameServer::say(std::string const& str) {
    return reinterpret_cast<GameServer_say_Vtable const*>(
        reinterpret_cast<void const* const*>(this)[0])->sayInternal(
        this, str, m_unk_0x68, m_unk_0x6C, 0, m_unk_0x70);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_say_std_string_constref (0x453890)