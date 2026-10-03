// FUNCTION: BF2 0x424f10
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

void GameEvent_dtor(void** self);

class DataBlockEvent : public GameEvent {
public:
    unsigned char m_unk_0x2;
    unsigned int m_unk_0x3;
    char m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    char m_unk_0x1C;

    ~DataBlockEvent();
};

DataBlockEvent::~DataBlockEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2c210);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
class dice_hfe_DataBlockEvent {
public:
    // REVERSED_FUNCTION: dtor_DataBlockEvent(0x424f10);
};

// REVERSED_FUNCTION: dice_hfe_DataBlockEvent::dtor_DataBlockEvent (0x424f10)