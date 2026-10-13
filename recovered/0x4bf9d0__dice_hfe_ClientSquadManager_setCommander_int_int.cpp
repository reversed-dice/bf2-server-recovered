// FUNCTION: BF2 0x4bf9d0
namespace dice { namespace hfe {

class IPlayer;

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual IPlayer* getPlayer(int id);      // slot 8 (0x40)
};

extern PlayerManager* playerManager;

struct ClientSquadManager {
    char pad[0x64];
    int m_64[8];        // +0x64
    int setCommander(int a, int b);
};

typedef void (*Fnv68)(void*, int);

int ClientSquadManager::setCommander(int a, int b) {
    int i = a - 1;
    PlayerManager* pm = playerManager;
    IPlayer* p1 = pm->getPlayer(m_64[i]);
    IPlayer* p2 = playerManager->getPlayer(b);
    if (p1 != 0) ((Fnv68)(*(void***)p1)[68])(p1, 0);
    if (p2 != 0) ((Fnv68)(*(void***)p2)[68])(p2, 1);
    m_64[i] = b;
    return 1;
}

} }
