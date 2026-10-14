// FUNCTION: BF2 0x465170
namespace dice { namespace hfe {

class GameEvent;

class GameServer {
public:
    void _sendGameEvent(unsigned int, GameEvent*, bool, bool);
    void sendGameEventIfPlaying(unsigned int, GameEvent*);
};

void GameServer::sendGameEventIfPlaying(unsigned int a, GameEvent* e)
{
    _sendGameEvent(a, e, true, true);
}

} }
