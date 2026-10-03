// FUNCTION: BF2 0x415ce0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
};

class InviteEvent : public GameEvent {
public:
    virtual ~InviteEvent();

    // offset 0x0: vtable pointer (8 bytes)
    unsigned int m_field_0x8;
    unsigned int m_field_0xc;
    unsigned int m_field_0x10;
    unsigned int m_field_0x14;
};

template<typename T>
class GameEventMakerMaker {
public:
    static GameEvent* createEvent();
};

template<>
GameEvent* GameEventMakerMaker<InviteEvent>::createEvent() {
    return new InviteEvent();
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_InviteEvent_createEvent (0x415ce0)