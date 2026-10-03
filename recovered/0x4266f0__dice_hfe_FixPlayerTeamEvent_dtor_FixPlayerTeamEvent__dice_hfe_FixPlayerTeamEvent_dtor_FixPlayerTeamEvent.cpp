// FUNCTION: BF2 0x4266f0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

GameEvent::~GameEvent() {}

class FixPlayerTeamEvent : public GameEvent {
public:
    unsigned char m_unk_0x2;
    char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
    unsigned char m_unk_0x13;

    ~FixPlayerTeamEvent();
};

FixPlayerTeamEvent::~FixPlayerTeamEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_FixPlayerTeamEvent_dtor_FixPlayerTeamEvent (0x4266f0)