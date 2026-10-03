// FUNCTION: BF2 0x466370
namespace dice { namespace hfe {

class GameEvent;

class GameServer {
public:
    void sendGameEventToAll(GameEvent* ev);
private:
    void sendGameEventToAll(GameEvent* ev, bool broadcast, bool save);
};

void GameServer::sendGameEventToAll(GameEvent* ev) {
    sendGameEventToAll(ev, false, false);
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameServer_sendGameEventToAll_dice_hfe_GameEventptr (0x466370)