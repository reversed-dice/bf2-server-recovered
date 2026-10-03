// FUNCTION: BF2 0x466360
namespace dice { namespace hfe {

struct GameEvent;
struct GameServer {
    void sendGameEventToAll(GameEvent*, bool, bool);
    void sendGameEventToAllConnected(GameEvent*);
};

void GameServer::sendGameEventToAllConnected(GameEvent* gameEvent) {
    sendGameEventToAll(gameEvent, true, false);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_sendGameEventToAllConnected_dice_hfe_GameEventptr (0x466360)