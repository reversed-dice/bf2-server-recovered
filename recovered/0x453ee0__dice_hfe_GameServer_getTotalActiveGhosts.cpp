// FUNCTION: BF2 0x453ee0
#include <map>

namespace dice { namespace hfe {

class ClientConnection {
public:
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual int slot09();
    char m_pad[0x40];
};

class GameServer {
public:
    char m_pad[0xe8];
    std::map<unsigned int, ClientConnection*> m_clients;
    int getTotalActiveGhosts();
};

int GameServer::getTotalActiveGhosts() {
    int n = 0;
    for (std::map<unsigned int, ClientConnection*>::iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        if (it->second) n += it->second->slot09();
    }
    return n;
}

} }
