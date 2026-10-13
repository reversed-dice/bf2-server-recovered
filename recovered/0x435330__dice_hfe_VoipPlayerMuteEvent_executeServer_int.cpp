// FUNCTION: BF2 0x435330
namespace dice { namespace hfe {

enum EventCategory { EC0, EC1, EC2, EC3 };

class GameEvent {
public:
    GameEvent();
    virtual void ge0();
    virtual void ge1();
    virtual void ge2();
    virtual void ge3();
    virtual void ge4();
    virtual void ge5();
    virtual void ge6();
    virtual void ge7();
    virtual void ge8();
    virtual void ge9();
    virtual bool executeServer(int playerId);
    char _pad8[8];
};

class PostRemoteEvent : public GameEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, bool b, void* data, unsigned int size, float delay);
    char _pad[0x48];
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
    virtual void g37();
    virtual void sendRemoteEventToPlayer(int playerId, GameEvent* e);   // 0x130
};
extern IGame* game;

struct VoipMuteData {
    VoipMuteData(unsigned char a, int b) : muter(a), mutee(b) {}
        unsigned char muter;
    int mutee;
};

class VoipPlayerMuteEvent : public GameEvent {
public:
    VoipPlayerMuteEvent(unsigned char a, unsigned char b, unsigned char c) : m_muter(a), m_mutee(b), m_target(c) {}
    virtual bool executeServer(int playerId);
    unsigned char m_muter;
    unsigned char m_mutee;
    unsigned char m_target;
};

bool VoipPlayerMuteEvent::executeServer(int playerId)
{
    world::IPlayer* local = world::playerManager->getLocalPlayer();
    VoipMuteData data(m_muter, m_mutee);
    if (local && local->getId() == m_target)
        return false;
    game->sendEventToPlayer(m_target, new VoipPlayerMuteEvent(m_muter, m_mutee, m_target));
    game->sendRemoteEventToPlayer(m_target, new PostRemoteEvent(EC2, 0x3b, true, &data, 8, 0.0f));
    return true;
}

} }
