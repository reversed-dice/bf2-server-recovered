// FUNCTION: BF2 0x4a4210
namespace dice { namespace hfe {

class EventManager {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual void postEvent(int a, unsigned char type, int c, float d); // slot 5 (0x28)
};

extern EventManager* eventManager;

class GameLogic {
public:
    bool unload();
};

class ServerGameLogic : public GameLogic {
public:
    bool unload();
};

bool ServerGameLogic::unload()
{
    if (!GameLogic::unload()) {
        return false;
    }
    eventManager->postEvent(0, 6, 0, 0.0f);
    return true;
}

}}
