// FUNCTION: BF2 0x427d00
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
    virtual ~GameEvent();
};

class GrapplingHookCreateEvent : public GameEvent {
public:
    virtual ~GrapplingHookCreateEvent();
};

GameEvent::~GameEvent() {}

GrapplingHookCreateEvent::~GrapplingHookCreateEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookCreateEvent_dtor_GrapplingHookCreateEvent (0x427d00)