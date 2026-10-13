// FUNCTION: BF2 0x4be950
#include <string>
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class ChangeSquadNameEvent : public GameEvent {
public:
    ChangeSquadNameEvent(int team, int squad, int playerId, const std::string& name);
    char _pad[0x30];
};

namespace world {
class IPlayer {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual int getId();   // 0xa8
};
class IPlayerManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual IPlayer* getLocalPlayer();   // 0x60
};
extern IPlayerManager* playerManager;
}

class IGame {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual void g30();
    virtual void g31();
    virtual void g32();
    virtual void g33();
    virtual void g34();
    virtual void g35();
    virtual void sendEventToPlayer(int playerId, GameEvent* e);   // 0x120
};
extern IGame* game;

class SquadManager {
public:
    virtual bool setSquadName(int team, int squad, int playerId, const std::string& name, bool local);
};

class ClientSquadManager : public SquadManager {
public:
    virtual bool setSquadName(int team, int squad, int playerId, const std::string& name, bool local);
};

bool ClientSquadManager::setSquadName(int team, int squad, int playerId, const std::string& name, bool local)
{
    if (!world::playerManager->getLocalPlayer())
        return false;
    if (local)
        return SquadManager::setSquadName(team, squad, playerId, name, true);
    int id = world::playerManager->getLocalPlayer()->getId();
    if (id != playerId)
        return false;
    if (!game)
        return true;
    game->sendEventToPlayer(-1, new ChangeSquadNameEvent(team, squad, id, name));
    return true;
}

} }
