// FUNCTION: BF2 0x45a710
// BF2_FLAGS: -fno-strict-aliasing
#include <list>

namespace dice { namespace hfe {

namespace world {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25)
#undef V
};

class IPlayerManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14)
#undef V
    virtual std::list<IPlayer*>& getPlayers();
};

extern IPlayerManager* playerManager;

}

class IEventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern IEventManager* eventManager;

class IGameLogic {
public:
#define V(n) virtual void g##n();
    V(0) V(1) V(2) V(3) V(4) V(5)
#undef V
    virtual bool isRunning();
};
extern IGameLogic* gameLogic;

namespace python {
class PythonHost {
public:
    void uninitializeGameMode();
};
}
python::PythonHost* pythonHost();

class GameServer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49)
    V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59)
    V(60) V(61) V(62) V(63) V(64) V(65) V(66) V(67) V(68) V(69)
    V(70) V(71) V(72)
#undef V
    bool unload();
    void clientUnloadLevel(int clientId);
    char _pad[0x130];
    int m_138;
};

bool GameServer::unload()
{
    eventManager->sendEvent(2, 3, 0, 0.0f);
    {
    std::list<world::IPlayer*> players(world::playerManager->getPlayers());
    std::list<world::IPlayer*> dead;
    for (std::list<world::IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        if (((bool (*)(void*))(*(void***)*it)[0xc8 / 8])(*it))
            dead.push_back(*it);
    }
    for (std::list<world::IPlayer*>::iterator it = dead.begin(); it != dead.end(); ++it) {
        ((void (*)(GameServer*, void*))(*(void***)this)[0x240 / 8])(this, *it);
    }
    }
    bool r = ((bool (*)(void*))(*(void***)gameLogic)[0x30 / 8])(gameLogic);
    if (r)
        m_138 = 0;
    clientUnloadLevel(-1);
    pythonHost()->uninitializeGameMode();
    return r;
}

} }
