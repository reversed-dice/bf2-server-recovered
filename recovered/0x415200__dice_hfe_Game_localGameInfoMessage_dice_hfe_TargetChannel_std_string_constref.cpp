// FUNCTION: BF2 0x415200
#include <string>

namespace dice {
namespace hfe {

class IGameLogic {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void init();
    virtual void load(std::string const&);
    virtual void unload();
    virtual void close();
    virtual void update(float);
    virtual void reset();
    virtual void restartDemoPlayback();
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
    void namesToIds(int*, int*, int*, std::string const&, std::string const&, std::string const&);
};

enum TargetChannel { };

namespace world {

class IPlayer;

class IPlayerManager {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual IPlayer* getLocalHumanPlayer();
};

extern IPlayerManager* playerManager;

} // namespace world

class Game {
public:
    int localRadioMessage(TargetChannel, std::string const&);
};

int Game::localRadioMessage(TargetChannel, std::string const& msg)
{
    if (gameLogic == 0 || gameLogic->slot86() == 1)
    {
        if (world::playerManager->getLocalHumanPlayer() != 0)
        {
            int oids;
            ((GameLogic*)gameLogic)->getVoiceMessages()->namesToIds(&oids, 0, 0, msg, std::string(""), std::string(""));
        }
    }
    return 1;
}

} // namespace hfe
} // namespace dice
