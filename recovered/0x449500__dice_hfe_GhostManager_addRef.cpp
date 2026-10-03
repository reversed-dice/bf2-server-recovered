// FUNCTION: BF2 0x449500
namespace dice { namespace hfe {
class GhostManager {
public:
    char _pad[0x18];
    volatile int refCount;
    void addRef();
};
void GhostManager::addRef() {
    refCount = refCount + 1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GhostManager_addRef (0x449500)
