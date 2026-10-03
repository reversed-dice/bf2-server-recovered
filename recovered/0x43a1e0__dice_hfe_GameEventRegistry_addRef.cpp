// FUNCTION: BF2 0x43a1e0
namespace dice { namespace hfe {
class GameEventRegistry {
public:
    char _pad[8];
    volatile int refCount;
    void addRef();
};
void GameEventRegistry::addRef() {
    refCount = refCount + 1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameEventRegistry_addRef (0x43a1e0)
