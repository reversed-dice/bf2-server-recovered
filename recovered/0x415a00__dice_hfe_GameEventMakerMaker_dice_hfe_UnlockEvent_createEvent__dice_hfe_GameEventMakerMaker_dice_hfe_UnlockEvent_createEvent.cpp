// FUNCTION: BF2 0x415a00
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent() {}
private:
    // sizeof(GameEvent) = 0x50 (vptr + 72 bytes)
    unsigned char _pad[72];
};

class UnlockEvent : public GameEvent {};

template <typename T>
class GameEventMakerMaker {
public:
    static GameEvent* createEvent();
};

template <>
GameEvent* GameEventMakerMaker<UnlockEvent>::createEvent() {
    GameEvent* ev = ::new GameEvent;
    *(void**)ev = (void*)0xb2e850;
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_UnlockEvent_createEvent (0x415a00)