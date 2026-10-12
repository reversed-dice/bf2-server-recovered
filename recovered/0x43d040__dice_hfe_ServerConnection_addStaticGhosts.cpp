// FUNCTION: BF2 0x43d040
#include <map>

namespace dice { namespace hfe {

namespace io {
    class NetworkableDescriptor;
    class NetworkManager {
    public:
        std::map<unsigned int, NetworkableDescriptor*>& getStaticDescriptors();
    };
    extern NetworkManager* networkManager;
}

class GhostManager {
public:
    void ghostObject(io::NetworkableDescriptor*, float, bool);
};

class ClientConnection {
public:
    char m_pad[0x40];
    GhostManager* m_ghostManager;
};

class ServerConnection : public ClientConnection {
public:
    void addStaticGhosts();
};

void ServerConnection::addStaticGhosts()
{
    std::map<unsigned int, io::NetworkableDescriptor*>& desc = io::networkManager->getStaticDescriptors();
    for (std::map<unsigned int, io::NetworkableDescriptor*>::iterator it = desc.begin(); it != desc.end(); ++it) {
        m_ghostManager->ghostObject(it->second, -1.0f, false);
    }
}

} }
