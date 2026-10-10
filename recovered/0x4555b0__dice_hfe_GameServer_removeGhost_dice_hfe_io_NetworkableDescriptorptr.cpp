// FUNCTION: BF2 0x4555b0
#include <map>

namespace dice { namespace hfe {

namespace io { class NetworkableDescriptor; }

class GhostManager {
public:
    void removeGhostObject(io::NetworkableDescriptor* desc);
};

class ClientConnection {
public:
    char m_pad[0x40];
    GhostManager* m_ghostManager;
};

class GameServer {
public:
    char m_pad[0xe8];
    std::map<unsigned int, ClientConnection*> m_clients;
    void removeGhost(io::NetworkableDescriptor* desc);
};

void GameServer::removeGhost(io::NetworkableDescriptor* desc) {
    for (std::map<unsigned int, ClientConnection*>::iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        it->second->m_ghostManager->removeGhostObject(desc);
    }
}

} }
