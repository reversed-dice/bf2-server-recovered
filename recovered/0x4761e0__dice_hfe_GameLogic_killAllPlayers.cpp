// FUNCTION: BF2 0x4761e0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
namespace dice { namespace hfe {

class IPlayer;
class IPlayerManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14)
#undef V
    virtual std::list<IPlayer*>& getPlayers();
};
extern IPlayerManager* g_playerManager;

class GameLogic {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26)
#undef V
    virtual void killPlayer(IPlayer* p, bool suicide, bool silent);
    void killAllPlayers();
};

void GameLogic::killAllPlayers()
{
    std::list<IPlayer*>& players = g_playerManager->getPlayers();
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it)
        killPlayer(*it, false, true);
}

} }
