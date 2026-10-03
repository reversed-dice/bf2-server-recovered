// FUNCTION: BF2 0x4549a0
#include <map>
namespace dice { namespace hfe {

class Connection;

class GameServer {
public:
    Connection* getConnection(int id) const;
    char _pad0[0xe8];
    std::map<unsigned char, Connection*> m_connections;
};

Connection* GameServer::getConnection(int id) const
{
    std::map<unsigned char, Connection*>::const_iterator it = m_connections.find(id);
    if (it == m_connections.end())
        return 0;
    return it->second;
}

} }
