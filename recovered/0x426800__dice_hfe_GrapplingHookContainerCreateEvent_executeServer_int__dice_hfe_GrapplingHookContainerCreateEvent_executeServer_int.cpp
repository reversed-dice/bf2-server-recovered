// FUNCTION: BF2 0x426800
namespace dice { namespace hfe {

extern class IGame* dice_hfe_game;
extern const unsigned int dice_hfe_IID_IGameServer;

class IUnknown {
public:
    virtual void* queryInterface(unsigned int iid) = 0;
    virtual unsigned long addRef() = 0;
    virtual unsigned long release() = 0;
};

class IGame : public IUnknown {
public:
    virtual void* getInterface(unsigned int iid) = 0;
};

class GrapplingHookContainerCreateEvent {
public:
    bool executeServer_int(int arg);
};

bool GrapplingHookContainerCreateEvent::executeServer_int(int arg) {
    return dice_hfe_game->getInterface(dice_hfe_IID_IGameServer) != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_executeServer_int (0x426800)