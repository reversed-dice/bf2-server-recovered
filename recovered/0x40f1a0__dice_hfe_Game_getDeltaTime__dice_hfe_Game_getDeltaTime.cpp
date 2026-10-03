// FUNCTION: BF2 0x40f1a0
namespace dice { namespace hfe {

class System {
public:
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual double getTime() = 0;
};

extern System* g_system;

class Game {
    unsigned char m_pad[0x60];
    double m_lastTime;           // offset 0x60
public:
    double getDeltaTime();
};

double Game::getDeltaTime() {
    double currentTime = g_system->getTime();
    double delta = currentTime - m_lastTime;
    m_lastTime = currentTime;
    return delta;
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_getDeltaTime (0x40f1a0)