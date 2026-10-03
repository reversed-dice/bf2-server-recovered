// FUNCTION: BF2 0x415da0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
};

class CommanderEvent : public GameEvent {
public:
    virtual ~CommanderEvent();

private:
    unsigned long long m_data0;
    unsigned long long m_data1;
};

template <typename T>
class GameEventMakerMaker {
public:
    static T* createEvent();
};

template <>
CommanderEvent* GameEventMakerMaker<CommanderEvent>::createEvent() {
    return new CommanderEvent;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_CommanderEvent_createEvent (0x415da0)