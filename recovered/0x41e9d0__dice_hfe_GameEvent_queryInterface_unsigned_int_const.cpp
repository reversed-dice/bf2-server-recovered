// FUNCTION: BF2 0x41e9d0
namespace dice { namespace hfe {
extern int g_gameEventId;
class GameEvent {
public:
    void* queryInterface(unsigned int id);
};
void* GameEvent::queryInterface(unsigned int id) {
    if (id == g_gameEventId) return this;
    return 0;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameEvent_queryInterface_unsigned_int_const (0x41e9d0)
