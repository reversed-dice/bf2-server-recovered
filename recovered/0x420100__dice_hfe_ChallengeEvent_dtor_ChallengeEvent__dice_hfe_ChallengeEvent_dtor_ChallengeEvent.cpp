// FUNCTION: BF2 0x420100
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;

    virtual ~GameEvent();
};

GameEvent::~GameEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f0b0);
}

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
// REVERSED_FUNCTION: dice_hfe_ChallengeEvent_dtor_ChallengeEvent (0x420100)