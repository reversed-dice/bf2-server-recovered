// FUNCTION: BF2 0x429c30
namespace dice { namespace hfe {
  class GameEvent {
  public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
    virtual ~GameEvent();
  };
  GameEvent::~GameEvent() {}

  class IssueSquadOrderEvent : public GameEvent {
  public:
    unsigned char m_unk_0x2;
    short m_unk_0x7;
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
    unsigned int m_unk_0x38;
    char m_unk_0x3A;
    unsigned char m_unk_0x3B;
    ~IssueSquadOrderEvent();
  };
  IssueSquadOrderEvent::~IssueSquadOrderEvent() {}
} }
// REVERSED_FUNCTION: dice_hfe_IssueSquadOrderEvent_dtor_IssueSquadOrderEvent (0x429c30)