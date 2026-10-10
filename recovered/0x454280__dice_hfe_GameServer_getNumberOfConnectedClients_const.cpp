// FUNCTION: BF2 0x454280
#include <map>

namespace dice { namespace hfe {

class ClientConnection {
public:
    virtual ~ClientConnection();
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
    std::map<unsigned int, ClientConnection*> m_clients;

    int getNumberOfConnectedClients() const;
};

int GameServer::getNumberOfConnectedClients() const {
    int count = 0;
    for (std::map<unsigned int, ClientConnection*>::const_iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        ClientConnection* client = it->second;
        if (client->m_connectionState == 4 && !client->isDemoClient()) {
            count++;
        }
    }
    return count;
}

} }
