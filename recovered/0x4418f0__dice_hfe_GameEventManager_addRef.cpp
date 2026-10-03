// FUNCTION: BF2 0x4418f0
namespace dice { namespace hfe {
class GameEventManager {
public:
    char _pad[0x10];
    volatile int refCount;
    void addRef();
};
void GameEventManager::addRef() {
    refCount = refCount + 1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameEventManager_addRef (0x4418f0)
