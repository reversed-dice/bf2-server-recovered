// FUNCTION: BF2 0x41e9a0
namespace dice { namespace hfe {
class GameEvent {
public:
    char _pad[8];
    volatile int refCount;
    void addRef();
};
void GameEvent::addRef() {
    refCount = refCount + 1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameEvent_addRef (0x41e9a0)
