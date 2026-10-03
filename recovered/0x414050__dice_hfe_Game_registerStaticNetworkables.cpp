// FUNCTION: BF2 0x414050
namespace dice { namespace hfe {

namespace io {
class INetworkable {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28();
    virtual void setStatic(int flags);
    char _pad8[0x14];
    float m_lastUpdate;
};
class INetworkableRegistry {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual INetworkable* find(int id);
};
class NetworkManager { public: void addNetworkable(INetworkable* n, unsigned short flags); };
}

extern io::INetworkableRegistry* g_networkableRegistry;
extern io::NetworkManager* g_networkManager;
extern int g_staticNetworkableId;

class Game {
public:
    static void registerStaticNetworkables();
};

void Game::registerStaticNetworkables()
{
    io::INetworkable* n = g_networkableRegistry->find(g_staticNetworkableId);
    if (n) {
        n->setStatic(0);
        n->m_lastUpdate = -1.0f;
        g_networkManager->addNetworkable(n, 0x201);
    }
}

} }
