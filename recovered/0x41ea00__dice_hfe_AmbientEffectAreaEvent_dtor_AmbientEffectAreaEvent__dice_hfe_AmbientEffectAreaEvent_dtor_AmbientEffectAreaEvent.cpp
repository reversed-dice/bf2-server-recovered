// FUNCTION: BF2 0x41ea00
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent() {}
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

class AmbientEffectAreaEvent : public GameEvent {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x3;
    unsigned char m_unk_0x4;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x1C;
    char m_unk_0x20;
    short m_unk_0x22;
    void* m_unk_0x28;

    ~AmbientEffectAreaEvent();
};

AmbientEffectAreaEvent::~AmbientEffectAreaEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_AmbientEffectAreaEvent_dtor_AmbientEffectAreaEvent (0x41ea00)