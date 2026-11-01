// FUNCTION: BF2 0x4c2a90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <new>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class ChangeSquadNameEvent : public GameEvent {
public:
    ChangeSquadNameEvent(int team, int squad, int playerId, std::string const& name);
    char _pad[0x30];
};

class SetPrivateSquadEvent : public GameEvent {
public:
    SetPrivateSquadEvent(int team, int squad, bool isPrivate);
    char _pad[0x10];
};

class Squad {
public:
    virtual std::string const& getSquadName();
    virtual bool getIsPrivate();
    char _pad[0xc];
    int m_leader;               // +0x14
};

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

extern std::string defaultSquadNames[];

extern "C" void* fn_4c0df0(void* self, int team, int squad);   // SquadManager::getSquad

class SquadManager {
public:
    bool sendSquadManagerState(int playerId);
};

bool SquadManager::sendSquadManagerState(int playerId)
{
    for (int i = 0; i < 10; ++i) {
        Squad* sq = (Squad*)fn_4c0df0(this, 1, i);
        if (sq->getSquadName() != defaultSquadNames[i]) {
            int leader = sq->m_leader;
            game->sendEventToPlayer(playerId,
                new ChangeSquadNameEvent(1, i, leader, sq->getSquadName()));
        }
        if (sq->getIsPrivate()) {
            game->sendEventToPlayer(playerId,
                new SetPrivateSquadEvent(1, i, sq->getIsPrivate()));
        }

        sq = (Squad*)fn_4c0df0(this, 2, i);
        if (sq->getSquadName() != defaultSquadNames[i]) {
            int leader = sq->m_leader;
            game->sendEventToPlayer(playerId,
                new ChangeSquadNameEvent(2, i, leader, sq->getSquadName()));
        }
        if (sq->getIsPrivate()) {
            game->sendEventToPlayer(playerId,
                new SetPrivateSquadEvent(2, i, sq->getIsPrivate()));
        }
    }
    return true;
}

} }
