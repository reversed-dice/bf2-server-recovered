// FUNCTION: BF2 0x76f750
namespace dice { namespace hfe {
namespace world {
class IPlayer;
}

class ServerGameLogic {
public:
    void do_toggleFreeCamera(world::IPlayer* player);
};

extern ServerGameLogic* dice_hfe_gameLogic;

class GameServer {
public:
    void toggleFreeCamera(world::IPlayer* player);
};

void GameServer::toggleFreeCamera(world::IPlayer* player) {
    dice_hfe_gameLogic->do_toggleFreeCamera(player);
}
} }
// REVERSED_FUNCTION: dice_hfe_GameServer::toggleFreeCamera_dice_hfe_world_IPlayerptr (0x453bb0)