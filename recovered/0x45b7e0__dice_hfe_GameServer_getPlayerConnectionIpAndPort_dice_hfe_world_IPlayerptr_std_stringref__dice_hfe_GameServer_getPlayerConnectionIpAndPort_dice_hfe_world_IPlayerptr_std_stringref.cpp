// FUNCTION: BF2 0x45b7e0
#include <string>

namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
    virtual ~IPlayer() = 0;
    virtual void d0() = 0;
    virtual void d1() = 0;
    virtual void d2() = 0;
    virtual void d3() = 0;
    virtual void d4() = 0;
    virtual void d5() = 0;
    virtual void d6() = 0;
    virtual void d7() = 0;
    virtual void d8() = 0;
    virtual void d9() = 0;
    virtual void d10() = 0;
    virtual void d11() = 0;
    virtual void d12() = 0;
    virtual void d13() = 0;
    virtual void d14() = 0;
    virtual void d15() = 0;
    virtual void d16() = 0;
    virtual void d17() = 0;
    virtual void d18() = 0;
    virtual int getID() = 0;
};

} } }

namespace dice { namespace hfe {

class GameServer {
public:
    bool getConnectionIpAndPort(int playerId, std::string& out);
    bool getPlayerConnectionIpAndPort(world::IPlayer* player, std::string& out);
};

bool GameServer::getPlayerConnectionIpAndPort(world::IPlayer* player, std::string& out) {
    if (!player) return false;
    return getConnectionIpAndPort(player->getID(), out);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getPlayerConnectionIpAndPort_dice_hfe_world_IPlayerptr_std_stringref (0x45b7e0)