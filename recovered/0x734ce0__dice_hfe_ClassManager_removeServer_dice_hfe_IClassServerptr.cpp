#include <map>
#include <string>

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x734ce0
namespace dice { namespace hfe {

class IClassServer {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

class ClassManager {
public:
    char pad0[0x10];
    std::map<IClassServer*, std::string> m_servers;
    void removeServer(IClassServer*);
};

void ClassManager::removeServer(IClassServer* server) {
    m_servers.erase(m_servers.find(server));
    server->release();
}

} }
// REVERSED_FUNCTION: dice_hfe_ClassManager_removeServer_dice_hfe_IClassServerptr (0x734ce0)
