// FUNCTION: BF2 0x42a160
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class JoinSquadEvent : public GameEvent {
public:
    virtual ~JoinSquadEvent();
    unsigned char m_unk_0x2;
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
};

GameEvent::~GameEvent() {}
JoinSquadEvent::~JoinSquadEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_JoinSquadEvent_dtor_JoinSquadEvent (0x42a160)