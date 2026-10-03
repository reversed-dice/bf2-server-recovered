// FUNCTION: BF2 0x494950
namespace dice { namespace hfe {

class System {
public:
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual double getTime();
};

extern System* g_system;

class Player {
    char _pad[0x3f0];
public:
    double m_unk_0x3F0;
    double m_stopTalkingThreshold;

    bool getIsTalking() const;
};

bool Player::getIsTalking() const {
    return !((g_system->getTime() - m_unk_0x3F0) > m_stopTalkingThreshold);
}

} }

// REVERSED_FUNCTION: dice::hfe::Player::getIsTalking (0x494950)