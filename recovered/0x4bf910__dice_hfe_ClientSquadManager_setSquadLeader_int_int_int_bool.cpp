// FUNCTION: BF2 0x4bf910
namespace dice { namespace hfe {
typedef void (*Fn120)(void*, int, void*);
class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    double m_pad;
};
class SetSquadLeaderEvent : public GameEvent {
public:
    unsigned char f_team;
    unsigned char f_leader;
    unsigned char f_squad;
    SetSquadLeaderEvent(int a1, int a2, int a3)
    {
        f_team = (unsigned char)a1;
        f_squad = (unsigned char)a2;
        f_leader = (unsigned char)a3;
    }
};
} }
void* operator new(unsigned long);
extern "C" unsigned char fn_4c2800(void*, int, int, int, char);
namespace dice { namespace hfe {
unsigned char setSquadLeader_4bf910(void* self, int a1, int a2, int a3, char fromServer)
{
    if (fromServer) return fn_4c2800(self, a1, a2, a3, 1);
    void* game = *(void**)0x010c5420;
    if (game == 0) return 1;
    Fn120 send = *(Fn120*)(*(char**)game + 0x120);
    SetSquadLeaderEvent* ev = new SetSquadLeaderEvent(a1, a2, a3);
    send(*(void**)0x010c5420, -1, ev);
    return 1;
}
} }
