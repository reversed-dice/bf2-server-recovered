// FUNCTION: BF2 0x433650
namespace dice { namespace hfe {

class GameEvent {
public:
    ~GameEvent();
};

class ToggleFreeCameraEvent {
public:
    ~ToggleFreeCameraEvent();
    bool executeClient();
};

ToggleFreeCameraEvent::~ToggleFreeCameraEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2e6d0);
    reinterpret_cast<GameEvent*>(this)->~GameEvent();
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_ToggleFreeCameraEvent_dtor_ToggleFreeCameraEvent (0x433650)