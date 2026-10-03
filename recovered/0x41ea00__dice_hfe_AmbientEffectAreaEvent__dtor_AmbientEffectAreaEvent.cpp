// FUNCTION: BF2 0x41ea00
class IEvent {
public:
    virtual ~IEvent();
};

class dice_hfe_AmbientEffectAreaEvent : public IEvent {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x3;
    unsigned char m_unk_0x4;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x1C;
    char m_unk_0x20;
    short m_unk_0x22;
    void* m_unk_0x28;
    ~dice_hfe_AmbientEffectAreaEvent();
};

IEvent::~IEvent() {}
dice_hfe_AmbientEffectAreaEvent::~dice_hfe_AmbientEffectAreaEvent() {}

// REVERSED_FUNCTION: dice_hfe_AmbientEffectAreaEvent::dtor_AmbientEffectAreaEvent (0x41ea00)