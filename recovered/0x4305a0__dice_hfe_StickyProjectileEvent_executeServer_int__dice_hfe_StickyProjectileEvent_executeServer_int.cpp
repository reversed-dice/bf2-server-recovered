// FUNCTION: BF2 0x4305a0
namespace dice { namespace hfe {

class Game {
public:
    virtual void* addRef();
    virtual void* release();
    virtual void* getInterfaceId();
    virtual void* queryInterface(unsigned int);
};

class StickyProjectileEvent {
public:
    bool executeServer(int);
};

extern Game* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameServer;

bool StickyProjectileEvent::executeServer(int) {
    return dice_hfe_game->queryInterface(dice_hfe_IID_IGameServer) != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_StickyProjectileEvent_executeServer_int (0x4305a0)