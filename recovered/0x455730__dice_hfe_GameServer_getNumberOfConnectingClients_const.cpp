// FUNCTION: BF2 0x455730
#include <map>

namespace dice { namespace hfe {

class Client {
public:
    virtual ~Client();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual bool isDemoClient() const;

    char _pad[0x18 - 8];
    int m_connectionState;
};

class GameServer {
public:
    char _pad[0xe8];
    std::map<int, Client*> m_clients;

    int getNumberOfConnectingClients() const;
};

int GameServer::getNumberOfConnectingClients() const {
    int count = 0;
    for (std::map<int, Client*>::const_iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        Client* client = it->second;
        if (client->m_connectionState != 4 && !client->isDemoClient()) {
            count++;
        }
    }
    return count;
}

} }
