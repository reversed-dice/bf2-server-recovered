// FUNCTION: BF2 0x4a4450

namespace dice { namespace hfe {

namespace world {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
#undef V
    virtual int getId();
#define V(n) virtual void _v##n();
    V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40)
    V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49) V(50)
    V(51) V(52) V(53) V(54) V(55) V(56) V(57)
#undef V
    virtual int getTeam();
#define V(n) virtual void _v##n();
    V(59) V(60) V(61) V(62) V(63) V(64) V(65) V(66)
#undef V
    virtual int getSquadId();
    virtual void _v68();
    virtual bool isCommander();
};

}

class SquadManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12)
#undef V
    virtual void removePlayerFromSquad(int team, int squad, int playerId, int zero);
#define V(n) virtual void _v##n();
    V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25)
#undef V
    virtual void removeCommander(int team);
#define V(n) virtual void _v##n();
    V(27) V(28) V(29) V(30) V(31) V(32)
#undef V
    virtual void removePlayer(int team, int playerId);
};

extern SquadManager* squadManager;

class ServerGameLogic {
public:
    bool _destroyPlayer(world::IPlayer* player);
};

bool ServerGameLogic::_destroyPlayer(world::IPlayer* player)
{
    if (squadManager) {
        if (player->isCommander()) {
            squadManager->removeCommander(player->getTeam());
        }
        if (player->getSquadId() != 0) {
            squadManager->removePlayerFromSquad(player->getTeam(), player->getSquadId(), player->getId(), 0);
        }
        squadManager->removePlayer(player->getTeam(), player->getId());
    }
    return true;
}

} }
