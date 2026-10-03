// FUNCTION: BF2 0x422570
namespace dice { namespace hfe {
void GameEvent_dtor(void**);

class ConnectionTypeEvent {
public:
    unsigned char m_connectionType; // +0x10

    ~ConnectionTypeEvent();
};

ConnectionTypeEvent::~ConnectionTypeEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2bb90);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ConnectionTypeEvent_dtor_ConnectionTypeEvent (0x422570)