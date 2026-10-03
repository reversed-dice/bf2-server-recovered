// FUNCTION: BF2 0x42a6d0
namespace dice { namespace hfe {

class IUnknown {
public:
    virtual void* queryInterface(unsigned int) = 0;  // vtable[0x00]
    virtual unsigned int addRef() = 0;                // vtable[0x08]
    virtual unsigned int release() = 0;               // vtable[0x10]
};

class Game : public IUnknown {
public:
    virtual void* getServer(unsigned int) = 0;        // vtable[0x18]
};

extern Game* game;
extern unsigned int IID_IGameServer;

class KilledByEvent {
public:
    bool executeServer(int);
};

bool KilledByEvent::executeServer(int) {
    return game->getServer(IID_IGameServer) != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_KilledByEvent_executeServer_int (0x42a6d0)