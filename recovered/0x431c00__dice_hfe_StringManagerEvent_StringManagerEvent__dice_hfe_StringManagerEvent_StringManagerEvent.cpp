// FUNCTION: BF2 0x431c00
namespace dice { namespace hfe {
class GameEvent {
public:
    GameEvent();
};
class StringManagerEvent : public GameEvent {
public:
    StringManagerEvent();
};
StringManagerEvent::StringManagerEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2e3d0);
}
} }
// REVERSED_FUNCTION: dice_hfe_StringManagerEvent_StringManagerEvent (0x431c00)