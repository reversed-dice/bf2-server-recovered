// FUNCTION: BF2 0x42eb00
namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class RequestEvent {
public:
    ~RequestEvent();
};

RequestEvent::~RequestEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2dcf0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_RequestEvent_dtor_RequestEvent (0x42eb00)