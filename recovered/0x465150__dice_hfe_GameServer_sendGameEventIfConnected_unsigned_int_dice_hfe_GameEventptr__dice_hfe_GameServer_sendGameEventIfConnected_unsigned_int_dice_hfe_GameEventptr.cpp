// FUNCTION: BF2 0x465150
namespace dice { namespace hfe {

class GameEvent;

class GameServer {
public:
    void sendGameEventIfConnected(unsigned int, GameEvent*);
    void sendGameEvent(unsigned int, GameEvent*, bool, bool);
};

void GameServer::sendGameEventIfConnected(unsigned int eventId, GameEvent* event) {
    sendGameEvent(eventId, event, true, false);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_sendGameEventIfConnected_unsigned_int_dice_hfe_GameEventptr (0x465150)