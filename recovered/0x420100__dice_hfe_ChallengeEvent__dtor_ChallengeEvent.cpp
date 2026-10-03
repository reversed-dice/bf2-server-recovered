// FUNCTION: BF2 0x420100
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class ChallengeEvent : public GameEvent {
public:
    unsigned short m_unk_0x3;
    void* m_unk_0x10;
    unsigned short m_unk_0x18;
    unsigned char m_unk_0x1A;
    unsigned char m_unk_0x2B;

    virtual ~ChallengeEvent();
};

ChallengeEvent::~ChallengeEvent() {
}

} }
class dice_hfe_ChallengeEvent {
public:
};

// REVERSED_FUNCTION: dice_hfe_ChallengeEvent::dtor_ChallengeEvent (0x420100)