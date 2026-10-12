// FUNCTION: BF2 0x455410
#include <map>
#include <vector>

namespace dice { namespace hfe {

namespace io {
class NetworkableDescriptor;
typedef unsigned int NetworkableStateMask;
class NetworkManager {
public:
    std::vector<std::pair<NetworkableDescriptor const*, NetworkableStateMask> > const& updateStateMasks();
};
extern NetworkManager* networkManager;
}

class GhostManager {
public:
    void updateStateMasks(std::vector<std::pair<io::NetworkableDescriptor const*, io::NetworkableStateMask> > const& masks);
};

class ClientConnection {
public:
    char pad[0x40];
    GhostManager* m_ghostManager;
};

class GameServer {
public:
    void updateStateMasks();

    char pad[0xe8];
    std::map<unsigned int, ClientConnection*> m_clients;
};

void GameServer::updateStateMasks()
{
    if (!m_clients.empty()) {
        std::vector<std::pair<io::NetworkableDescriptor const*, io::NetworkableStateMask> > const& masks = io::networkManager->updateStateMasks();
        for (std::map<unsigned int, ClientConnection*>::const_iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
            it->second->m_ghostManager->updateStateMasks(masks);
        }
    }
}

} }
