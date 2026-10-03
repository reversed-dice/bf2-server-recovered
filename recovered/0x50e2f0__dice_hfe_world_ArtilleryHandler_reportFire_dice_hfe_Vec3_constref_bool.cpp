// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x50e2f0
#include <list>
namespace dice { namespace hfe {

struct Vec3 {
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void postEvent(int playerId, PostRemoteEvent* ev);
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

class ArtilleryHandler {
public:
    void reportFire(const Vec3& pos, bool fired);
private:
    char m_pad0[0x18];
    int m_team;
};

void ArtilleryHandler::reportFire(const Vec3& pos, bool fired) {
    playerManager->v12();
    std::list<IPlayer*>& players = playerManager->getTeamPlayers(m_team);
    struct Payload { Payload(float a, float b, float c, bool f) : x(a), y(b), z(c), fired(f) {} float x, y, z; bool fired; } payload(pos.x, pos.y, pos.z, fired);
    for (std::list<IPlayer*>::iterator it = players.begin(); it != players.end(); ++it) {
        game->postEvent((*it)->getId(),
                        new PostRemoteEvent(EC_REMOTE, 0x2a, false, &payload, sizeof(payload), 0.0f));
    }
}

} } }
