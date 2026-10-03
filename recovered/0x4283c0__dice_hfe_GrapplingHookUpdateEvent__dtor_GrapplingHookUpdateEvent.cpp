// FUNCTION: BF2 0x4283c0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
};

class GrapplingHookUpdateEvent : public GameEvent {
public:
    ~GrapplingHookUpdateEvent();
};

GrapplingHookUpdateEvent::~GrapplingHookUpdateEvent() {
}

} }
class dice_hfe_GrapplingHookUpdateEvent {
public:
    // REVERSED_FUNCTION: dtor_GrapplingHookUpdateEvent(0x4283c0);
};

// REVERSED_FUNCTION: dice_hfe_GrapplingHookUpdateEvent::dtor_GrapplingHookUpdateEvent (0x4283c0)