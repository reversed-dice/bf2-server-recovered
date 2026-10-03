// FUNCTION: BF2 0x424f10
namespace dice { namespace hfe {

void operator delete(void* p);

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

void GameEvent_dtor(void** self);

class DataBlockEvent {
public:
    unsigned char m_unk_0x2;
    unsigned int m_unk_0x3;
    char m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    char m_unk_0x1C;

    ~DataBlockEvent();
};

void GameEvent_dtor(void** self) {
    *self = reinterpret_cast<void*>(0xb2f0b0);
}

DataBlockEvent::~DataBlockEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2c210);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_DataBlockEvent_dtor_DataBlockEvent (0x424f10)