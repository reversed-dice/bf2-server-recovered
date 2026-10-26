// FUNCTION: BF2 0x457b20
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
    virtual void p86();
    virtual void p87();
};

extern IGameLogic* gameLogic;

class VoiceMessages;

class GameLogic {
public:
    VoiceMessages* getVoiceMessages() const;
};

class VoiceMessages {
public:
    char namesToIds(int*, int*, int*, std::string const&, std::string const&, std::string const&);
};

enum TargetChannel { };

namespace world {

class IPlayer {
public:
#define V1(n) virtual void _v##n();
    V1(0) V1(1) V1(2) V1(3) V1(4) V1(5) V1(6) V1(7) V1(8) V1(9)
    V1(10) V1(11) V1(12) V1(13) V1(14) V1(15) V1(16) V1(17) V1(18) V1(19)
    V1(20)
#undef V1
    virtual unsigned char getSquad();   // slot 21 = 0xa8
#define V2(n) virtual void _w##n();
    V2(0) V2(1) V2(2) V2(3) V2(4) V2(5) V2(6) V2(7) V2(8) V2(9)
    V2(10) V2(11) V2(12) V2(13) V2(14) V2(15) V2(16) V2(17) V2(18) V2(19)
    V2(20) V2(21) V2(22) V2(23) V2(24) V2(25) V2(26) V2(27) V2(28) V2(29)
    V2(30) V2(31) V2(32) V2(33) V2(34) V2(35)
#undef V2
    virtual unsigned char getKind();    // slot 58 = 0x1d0
#define V3(n) virtual void _x##n();
    V3(0) V3(1) V3(2) V3(3) V3(4) V3(5) V3(6) V3(7) V3(8) V3(9)
    V3(10) V3(11) V3(12) V3(13) V3(14) V3(15) V3(16) V3(17) V3(18) V3(19)
    V3(20) V3(21) V3(22) V3(23) V3(24) V3(25) V3(26) V3(27) V3(28) V3(29)
    V3(30) V3(31) V3(32) V3(33) V3(34) V3(35) V3(36) V3(37) V3(38) V3(39)
    V3(40) V3(41) V3(42) V3(43) V3(44) V3(45) V3(46) V3(47) V3(48) V3(49)
    V3(50) V3(51) V3(52) V3(53) V3(54) V3(55) V3(56) V3(57) V3(58) V3(59)
    V3(60) V3(61) V3(62) V3(63) V3(64) V3(65) V3(66) V3(67) V3(68) V3(69)
    V3(70) V3(71) V3(72) V3(73) V3(74) V3(75) V3(76) V3(77) V3(78) V3(79)
    V3(80) V3(81) V3(82) V3(83) V3(84) V3(85) V3(86) V3(87) V3(88) V3(89)
    V3(90) V3(91) V3(92) V3(93) V3(94) V3(95) V3(96) V3(97) V3(98) V3(99)
    V3(100) V3(101) V3(102) V3(103) V3(104) V3(105) V3(106) V3(107) V3(108) V3(109)
    V3(110) V3(111) V3(112) V3(113) V3(114) V3(115) V3(116) V3(117) V3(118) V3(119)
    V3(120) V3(121) V3(122) V3(123) V3(124) V3(125) V3(126) V3(127) V3(128) V3(129)
    V3(130) V3(131) V3(132) V3(133) V3(134) V3(135)
#undef V3
    virtual bool canHear(int);          // slot 195 = 0x618
};

class IPlayerManager {
public:
#define Q(n) virtual void q##n();
    Q(0) Q(1) Q(2) Q(3) Q(4) Q(5) Q(6) Q(7) Q(8) Q(9) Q(10) Q(11)
#undef Q
    virtual IPlayer* getLocalHumanPlayer();
};

extern IPlayerManager* playerManager;

} // namespace world

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
    RadioMessageReceivedEvent(unsigned char sender, unsigned char team, unsigned char squad, unsigned char kind, unsigned char target, int a, int b)
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
    int radioMessage(TargetChannel channel, std::string const& msg, world::IPlayer* player, unsigned int a, bool, bool flag);
};

int GameServer::radioMessage(TargetChannel channel, std::string const& msg, world::IPlayer* player, unsigned int a, bool, bool flag)
{
    if (player != 0)
    {
        world::playerManager->getLocalHumanPlayer();
        int oid;
        char ok = ((GameLogic*)gameLogic)->getVoiceMessages()->namesToIds(&oid, 0, 0, msg, std::string(""), std::string(""));
        if (ok && (flag || !player->canHear(1)))
        {
            RadioMessageReceivedEvent* ev = new RadioMessageReceivedEvent(0xff, oid, player->getSquad(), player->getKind(), a, channel, 3);
            eventManager->postEvent(6, ev, 0.0f);
        }
    }
    return 1;
}

} }
