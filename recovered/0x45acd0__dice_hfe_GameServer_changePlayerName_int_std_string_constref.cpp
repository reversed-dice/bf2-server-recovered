// FUNCTION: BF2 0x45acd0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

namespace world {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
#undef V
    virtual void setName(const std::string& name);
    virtual const std::string& getName();
};

class IPlayerManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
#undef V
    virtual IPlayer* getPlayer(int id);
};

extern IPlayerManager* playerManager;

}

std::string formatString(const char* fmt, ...);

class ChangePlayerNameEvent {
public:
    ChangePlayerNameEvent(world::IPlayer* player);
    char _pad[0x38];
};

class GameServer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36)
#undef V
    virtual void pushEvent(ChangePlayerNameEvent* ev);
    bool changePlayerName(int clientId, const std::string& name);
    char _pad[0x130];
    int m_138;
};

bool GameServer::changePlayerName(int clientId, const std::string& name)
{
    world::IPlayer* p = world::playerManager->getPlayer(clientId);
    if (p == 0)
        return false;
    if (name == p->getName())
        return false;
    std::string base(name, 0, 0x17);
    std::string old(p->getName());
    p->setName(base);
    for (int i = 0; p->getName() == old; ++i)
        p->setName(base + formatString("_%d", i));
    pushEvent(new ChangePlayerNameEvent(p));
    return true;
}

} }
