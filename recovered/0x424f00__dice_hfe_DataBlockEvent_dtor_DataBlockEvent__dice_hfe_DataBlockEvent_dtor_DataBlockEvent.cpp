// FUNCTION: BF2 0x424f00
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;

    virtual ~GameEvent();
};

GameEvent::~GameEvent() {}

class DataBlockEvent : public GameEvent {
public:
    unsigned char m_unk_0x2;
    unsigned int m_unk_0x3;
    char m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    char m_unk_0x1C;

    virtual ~DataBlockEvent();
};

DataBlockEvent::~DataBlockEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_DataBlockEvent_dtor_DataBlockEvent (0x424f00)