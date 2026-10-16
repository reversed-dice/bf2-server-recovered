// FUNCTION: BF2 0x457d10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice {
namespace hfe {

class IGameLogic {
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
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void p85();
    virtual int slot86();
};

extern IGameLogic* gameLogic;

class VoiceMessages;

class GameLogic {
public:
    VoiceMessages* getVoiceMessages() const;
};

class VoiceMessages {
public:
    bool namesToIds(int*, int*, int*, std::string const&, std::string const&, std::string const&);
};

enum TargetChannel { };

class EventNode {
public:
    EventNode() : m_next(0) {}
    virtual ~EventNode();
    virtual void release();
    char _pad[0x18];
    EventNode* m_next;
};

class RadioMessageReceivedEvent : public EventNode {
public:
    RadioMessageReceivedEvent(unsigned char sender, unsigned char squad, unsigned char team, unsigned char kind, unsigned char target, int a, int b)
        : m_sender(sender), m_team(team), m_squad(squad), m_kind(kind), m_target(target), m_a(a), m_b(b) {}
    unsigned char m_sender;
    unsigned char m_team;
    unsigned char m_squad;
    unsigned char m_kind;
    unsigned char m_target;
    int m_a;
    int m_b;
};

class IEventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void postEvent(int type, EventNode* e, float delay);
};

extern IEventManager* eventManager;

class GameServer {
public:
    int gameInfoMessage(TargetChannel channel, std::string const& msg, unsigned int a, unsigned int b, bool unused);
};

int GameServer::gameInfoMessage(TargetChannel channel, std::string const& msg, unsigned int a, unsigned int b, bool)
{
    int oid;
    if (((GameLogic*)gameLogic)->getVoiceMessages()->namesToIds(&oid, 0, 0, msg, std::string(""), std::string("")))
    {
        RadioMessageReceivedEvent* ev = new RadioMessageReceivedEvent(0xff, a, oid, b, b, channel, 0);
        eventManager->postEvent(6, ev, 0.0f);
    }
    return 1;
}

} }
