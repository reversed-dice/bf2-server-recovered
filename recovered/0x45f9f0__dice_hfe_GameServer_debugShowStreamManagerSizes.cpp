// FUNCTION: BF2 0x45f9f0
#include <map>

namespace dice { namespace hfe {

class ClientConnection {
public:
    char m_pad[0x40];
    void outputStreamManagerStats();
};

class GameServer {
public:
    char m_pad[0xe8];
    std::map<unsigned int, ClientConnection*> m_clients;
    void debugShowStreamManagerSizes();
};

void GameServer::debugShowStreamManagerSizes() {
    for (std::map<unsigned int, ClientConnection*>::iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        if (it->second) it->second->outputStreamManagerStats();
    }
}

} }
