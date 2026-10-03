// FUNCTION: BF2 0x466380
namespace dice { namespace hfe {

class GameEvent;

class GameServer {
public:
    virtual void sendGameEventToAllPlaying(GameEvent* event);
    void sendGameEventToAll(GameEvent* event, bool a, bool b);
};

void GameServer::sendGameEventToAllPlaying(GameEvent* event) {
    sendGameEventToAll(event, true, true);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_sendGameEventToAllPlaying_dice_hfe_GameEventptr (0x466380)