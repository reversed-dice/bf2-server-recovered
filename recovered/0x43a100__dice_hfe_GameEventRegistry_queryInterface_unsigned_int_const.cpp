// FUNCTION: BF2 0x43a100
namespace dice { namespace hfe {
extern int g_gameEventRegistryId;
class GameEventRegistry {
public:
    void* queryInterface(unsigned int id);
};
void* GameEventRegistry::queryInterface(unsigned int id) {
    if (id == g_gameEventRegistryId) return this;
    return 0;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_queryInterface_unsigned_int_const (0x43a100)
