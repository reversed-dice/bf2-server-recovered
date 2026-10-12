// BF2_FLAGS: -fno-tree-ter -fno-strict-aliasing
// FUNCTION: BF2 0x474220
#include <list>

namespace dice { namespace hfe {

enum EventCategory {
    EC_Two = 2
};

class PostRemoteEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int eventType, bool flag, void* data, unsigned int size, float f);
    char _pad[0x58];
};

class Game {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37)
#undef V
    virtual void postEvent(unsigned int id, PostRemoteEvent* event);
};

extern Game* game;

namespace world {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
#undef V
    virtual unsigned int getId();
};

class PlayerManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11)
#undef V
    virtual void lock();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual std::list<IPlayer*>& getPlayersInTeam(int team);
};

extern PlayerManager* playerManager;

struct ToolState {
    char _pad[0x34];
    int m_count;
};

class CommanderToolsManager {
public:
    char _pad[8];
    ToolState m_tools[2];

    float getPercentOfDropVehicles(int team);
    void addDropVehicleToTeam(int team);
};

typedef void (*PostFn)(Game*, unsigned int, PostRemoteEvent*);

void CommanderToolsManager::addDropVehicleToTeam(int team)
{
    m_tools[team - 1].m_count--;
    playerManager->lock();
    std::list<IPlayer*>& players = playerManager->getPlayersInTeam(team);
    float pct = getPercentOfDropVehicles(team);

    std::list<IPlayer*>::iterator end = players.end();
    std::list<IPlayer*>::iterator it = players.begin();
    while (it != end) {
        PostFn fn = (PostFn)(*(void***)game)[0x130 / 8];
        PostRemoteEvent* ev = new PostRemoteEvent(EC_Two, 0x4b, false, &pct, 4, 0.0f);
        unsigned int id = (*it)->getId();
        fn(game, id, ev);
        ++it;
    }
}

} } }
