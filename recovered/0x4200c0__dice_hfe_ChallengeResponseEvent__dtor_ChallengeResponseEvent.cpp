// FUNCTION: BF2 0x4200c0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
    unsigned int m_unk_0x00;
    unsigned int m_unk_0x04;
    unsigned int m_unk_0x08;
    unsigned int m_unk_0x0C;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned int m_unk_0x24;
    unsigned int m_unk_0x28;
    unsigned int m_unk_0x2C;
    unsigned int m_unk_0x30;
    unsigned int m_unk_0x34;
    unsigned int m_unk_0x38;
    unsigned int m_unk_0x3C;
    unsigned int m_unk_0x40;
    unsigned int m_unk_0x44;
    unsigned int m_unk_0x48;
    unsigned int m_unk_0x4C;
    unsigned int m_unk_0x50;
};

class ChallengeResponseEvent : public GameEvent {
public:
    unsigned int m_unk_0x5C;
    int m_unk_0x60;
    int m_unk_0x64;
};

inline GameEvent::~GameEvent() {}

}}

class dice_hfe_ChallengeResponseEvent {
public:
    // REVERSED_FUNCTION: dtor_ChallengeResponseEvent(0x4200c0);
};

// REVERSED_FUNCTION: dice_hfe_ChallengeResponseEvent::dtor_ChallengeResponseEvent (0x4200c0)