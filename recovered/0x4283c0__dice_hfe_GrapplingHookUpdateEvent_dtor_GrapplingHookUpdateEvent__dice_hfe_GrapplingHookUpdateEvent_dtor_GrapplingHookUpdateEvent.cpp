// FUNCTION: BF2 0x4283c0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class GrapplingHookUpdateEvent : public GameEvent {
public:
    unsigned short m_unk_0x2;
    unsigned short m_unk_0x10;
    unsigned char m_unk_0x12;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned int m_unk_0x24;
    unsigned int m_unk_0x28;
    unsigned char m_unk_0x2C;

    unsigned int getType() const;
    ~GrapplingHookUpdateEvent();
};

GrapplingHookUpdateEvent::~GrapplingHookUpdateEvent() {
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookUpdateEvent_dtor_GrapplingHookUpdateEvent (0x4283c0)