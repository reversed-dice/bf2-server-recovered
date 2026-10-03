// FUNCTION: BF2 0x40f760
namespace dice { namespace hfe {

namespace io {
class NetworkableObject { public: char _pad[8]; unsigned short m_id; };
class INetworkableRegistry {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual NetworkableObject* find(int id);
};
class NetworkManager { public: void unregisterStatic(unsigned short id); };
}

extern io::INetworkableRegistry* g_networkableRegistry;
extern io::NetworkManager* g_networkManager;
extern int g_staticNetworkableId;

class Game {
public:
    static void unregisterStaticNetworkables();
};

void Game::unregisterStaticNetworkables()
{
    io::NetworkableObject* o = g_networkableRegistry->find(g_staticNetworkableId);
    if (o) {
        g_networkManager->unregisterStatic(o->m_id);
        o->m_id = 0;
    }
}

} }
