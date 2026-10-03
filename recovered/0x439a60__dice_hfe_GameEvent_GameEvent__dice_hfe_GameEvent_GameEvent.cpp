// FUNCTION: BF2 0x439a60
namespace dice { namespace hfe {
class GameEvent {
public:
    GameEvent();
};
GameEvent::GameEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f0b0);
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x8) = 1;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0xc) = 0xffffffffu;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEvent_GameEvent (0x439a60)