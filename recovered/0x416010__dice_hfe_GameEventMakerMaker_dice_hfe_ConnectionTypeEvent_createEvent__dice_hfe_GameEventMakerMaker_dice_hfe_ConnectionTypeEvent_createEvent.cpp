// FUNCTION: BF2 0x416010
namespace dice { namespace hfe {

class GameEvent_GameEvent {
public:
    GameEvent_GameEvent();
    virtual ~GameEvent_GameEvent() {}
    char _pad[0x08];
};

class ConnectionTypeEvent : public GameEvent_GameEvent {
public:
    char _pad[0x08];  // total size 0x18
};

class GameEventMakerMaker {
public:
    ConnectionTypeEvent* createEvent();
};

ConnectionTypeEvent* GameEventMakerMaker::createEvent() {
    return new ConnectionTypeEvent();
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ConnectionTypeEvent_createEvent (0x416010)