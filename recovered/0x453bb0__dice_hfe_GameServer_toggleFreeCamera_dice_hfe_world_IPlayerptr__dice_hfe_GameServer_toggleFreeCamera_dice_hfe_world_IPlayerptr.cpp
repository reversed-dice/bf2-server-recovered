// FUNCTION: BF2 0x453bb0
namespace dice { namespace hfe {

namespace world { class IPlayer; }

class ServerGameLogic {
public:
    void do_toggleFreeCamera(world::IPlayer* player);
};

class GameServer {
public:
    void toggleFreeCamera(world::IPlayer* player);
};

extern ServerGameLogic* gameLogic;

void GameServer::toggleFreeCamera(world::IPlayer* player)
{
    gameLogic->do_toggleFreeCamera(player);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_toggleFreeCamera_dice_hfe_world_IPlayerptr (0x453bb0)