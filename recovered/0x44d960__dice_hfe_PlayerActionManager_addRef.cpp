// FUNCTION: BF2 0x44d960
namespace dice { namespace hfe {
class PlayerActionManager {
public:
    char _pad[0x10];
    volatile int refCount;
    void addRef();
};
void PlayerActionManager::addRef() {
    refCount = refCount + 1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_addRef (0x44d960)
