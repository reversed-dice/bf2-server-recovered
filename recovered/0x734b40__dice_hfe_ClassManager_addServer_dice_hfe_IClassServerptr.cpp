// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x734b40
#include <map>
#include <string>

namespace dice { namespace hfe {

class IClassServer {
public:
    virtual void init();
    virtual void i1();
};

class ClassManager {
public:
    void findServer(IClassServer*);
    char _pad1[0x10];
    std::map<IClassServer*, std::string> m_servers;
    void addServer(IClassServer* server);
};

void ClassManager::addServer(IClassServer* server)
{
    findServer(server);
    std::string name;
    m_servers.insert(std::make_pair(server, name));
    server->init();
}


} }
