// FUNCTION: BF2 0x416010
namespace dice { namespace hfe {

class GameEvent_GameEvent {
public:
    int m_field_8;
    int m_field_C;
    GameEvent_GameEvent();
    virtual ~GameEvent_GameEvent() {}
};

class ConnectionTypeEvent : public GameEvent_GameEvent {
public:
    int m_field_10;
    int m_field_14;
};

class GameEventMakerMaker {
public:
    GameEvent_GameEvent* ConnectionTypeEvent_createEvent();
};

GameEvent_GameEvent* GameEventMakerMaker::ConnectionTypeEvent_createEvent() {
    return new ConnectionTypeEvent();
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_ConnectionTypeEvent_createEvent (0x416010)