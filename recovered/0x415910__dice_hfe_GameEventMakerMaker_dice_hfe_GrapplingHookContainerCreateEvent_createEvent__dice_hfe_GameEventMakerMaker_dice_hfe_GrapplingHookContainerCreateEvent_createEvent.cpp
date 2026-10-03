// FUNCTION: BF2 0x415910
namespace dice { namespace hfe {

class GameEvent {
public:
    // offset 0x00: vtable ptr (8 bytes)
    GameEvent();
    virtual ~GameEvent();
};

class GrapplingHookContainerCreateEvent : public GameEvent {
public:
    // offset 0x00: vtable ptr (8 bytes, inherited)
    // offset 0x08-0x1F: event payload (24 bytes, sizeof=0x20)
    GrapplingHookContainerCreateEvent() : GameEvent() {}
    virtual ~GrapplingHookContainerCreateEvent();

private:
    unsigned char m_data[24];
};

template<typename T>
class GameEventMakerMaker {
public:
    static T* createEvent();
};

template<>
GrapplingHookContainerCreateEvent* GameEventMakerMaker<GrapplingHookContainerCreateEvent>::createEvent() {
    return new GrapplingHookContainerCreateEvent();
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_GrapplingHookContainerCreateEvent_createEvent (0x415910)