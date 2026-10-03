// FUNCTION: BF2 0x42d8c0
void GameEvent_dtor(void*);

namespace dice { namespace hfe {

class RadioMessageEvent {
public:
    ~RadioMessageEvent();
    unsigned char m_unk_0x2;
    unsigned int m_unk_0x3;
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
    unsigned char m_unk_0x13;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
};

RadioMessageEvent::~RadioMessageEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2da30);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_RadioMessageEvent_dtor_RadioMessageEvent (0x42d8c0)