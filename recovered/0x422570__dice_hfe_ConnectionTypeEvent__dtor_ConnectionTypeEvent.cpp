// FUNCTION: BF2 0x422570
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;

    virtual ~GameEvent();
};

class ConnectionTypeEvent : public GameEvent {
public:
    unsigned char m_connectionType;
    unsigned char m_unk_0x10;

    virtual ~ConnectionTypeEvent();
};

ConnectionTypeEvent::~ConnectionTypeEvent() {
}

} }
class dice_hfe_ConnectionTypeEvent {
public:
    // REVERSED_FUNCTION: dtor_ConnectionTypeEvent(0x422570);
};

// REVERSED_FUNCTION: dice_hfe_ConnectionTypeEvent::dtor_ConnectionTypeEvent (0x422570)