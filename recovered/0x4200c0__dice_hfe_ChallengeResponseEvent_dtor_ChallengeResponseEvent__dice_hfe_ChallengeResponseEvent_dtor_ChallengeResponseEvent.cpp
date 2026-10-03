// FUNCTION: BF2 0x4200c0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent() {}
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

class ChallengeResponseEvent : public GameEvent {
public:
    virtual ~ChallengeResponseEvent();
    unsigned int m_unk_0x5C;
    int m_unk_0x60;
    int m_unk_0x64;
};

ChallengeResponseEvent::~ChallengeResponseEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_ChallengeResponseEvent_dtor_ChallengeResponseEvent (0x4200c0)