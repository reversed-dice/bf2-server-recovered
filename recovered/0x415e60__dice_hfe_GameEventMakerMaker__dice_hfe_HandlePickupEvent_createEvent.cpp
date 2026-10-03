// FUNCTION: BF2 0x415e60
namespace dice { namespace hfe {
struct GameEvent {
    void* vptr;
    int   m_field_08;
    int   m_field_0c;
};
void GameEvent_GameEvent(GameEvent* self);
class GameEventMakerMaker {
public:
    void* HandlePickupEvent_createEvent();
};
void* GameEventMakerMaker::HandlePickupEvent_createEvent() {
    void* ptr = ::operator new(0x18);
    GameEvent_GameEvent(static_cast<GameEvent*>(ptr));
    *reinterpret_cast<void**>(ptr) = reinterpret_cast<void*>(0xb2cdf0ULL);
    return ptr;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_HandlePickupEvent_createEvent (0x415e60)