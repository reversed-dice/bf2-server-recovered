// FUNCTION: BF2 0x4546b0
#include <string>
namespace dice { namespace hfe {

namespace io { class NetServer { public: std::string getName() const; }; }

class GameServer {
public:
    std::string getName() const;
    char _pad0[0xb0];
    io::NetServer* m_netServer;
};

std::string GameServer::getName() const
{
    if (m_netServer)
        return m_netServer->getName();
    return "";
}

} }
