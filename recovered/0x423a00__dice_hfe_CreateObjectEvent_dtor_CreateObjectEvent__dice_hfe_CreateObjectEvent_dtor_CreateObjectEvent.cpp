// FUNCTION: BF2 0x423a00
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

class CreateObjectEvent : public GameEvent {
public:
    ~CreateObjectEvent();
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x3;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x5;
    unsigned int m_unk_0x6;
    unsigned int m_unk_0x10;
    unsigned short m_field_14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned int m_unk_0x24;
    unsigned int m_unk_0x28;
    unsigned int m_unk_0x2C;
    unsigned int m_unk_0x30;
    unsigned int m_unk_0x34;
};

GameEvent::~GameEvent() {}
CreateObjectEvent::~CreateObjectEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_CreateObjectEvent_dtor_CreateObjectEvent (0x423a00)