// FUNCTION: BF2 0x464c20
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x90];
    volatile int refCount;
    void addRef();
};
void GameServer::addRef() { refCount = refCount + 1; }
}
}

// REVERSED_FUNCTION: dice_hfe_GameServer_addRef (0x464c20)
