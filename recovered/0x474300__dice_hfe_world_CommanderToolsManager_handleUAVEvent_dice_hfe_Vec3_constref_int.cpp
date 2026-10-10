// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x474300
#include <list>
namespace dice { namespace hfe {

struct Vec3 {
    Vec3() {} Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    float x, y, z;
};

enum EventCategory { EC_REMOTE = 2 };

class PostRemoteEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, bool reliable, void* data,
                    unsigned int size, float delay);
    char m_pad0[0x58];
};

class Game {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void sendToPlayer(int playerId, PostRemoteEvent* ev);
};

extern Game* game;

namespace world {

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual int getId();
};

class IPlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual std::list<IPlayer*>& getTeamPlayers(int team);
};

extern IPlayerManager* playerManager;

class CommanderToolState {
public:
    bool launchUAV(const Vec3& pos);
    char m_pad0[0x38];
};

class CommanderToolsManager {
public:
    void handleUAVEvent(const Vec3& pos, int team);
private:
    char m_pad0[0x8];
    CommanderToolState m_states[2];
};

void CommanderToolsManager::handleUAVEvent(const Vec3& pos, int team) {
    if (!m_states[team - 1].launchUAV(pos))
        return;
        const unsigned* p = (const unsigned*)&pos;
    unsigned b2 = p[2];
    unsigned b1 = p[1];
    unsigned b0 = p[0];
    Vec3 payload;
    unsigned* out = (unsigned*)&payload;
    out[0] = b0;
    out[1] = b1;
    out[2] = b2;
    std::list<IPlayer*>& players = playerManager->getTeamPlayers(team);
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        if ((*it)->getId() != 0xff)
            game->sendToPlayer((*it)->getId(),
                               new PostRemoteEvent(EC_REMOTE, 0x28, false, &payload, sizeof(Vec3), 0.0f));
    }
}

} } }
