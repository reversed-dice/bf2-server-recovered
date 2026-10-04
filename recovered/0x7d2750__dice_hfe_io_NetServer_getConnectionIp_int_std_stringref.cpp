// FUNCTION: BF2 0x7d2750
#include <map>
#include <string>
namespace dice { namespace hfe { namespace io {
class SWConnection {
public:
    const char* getPeerAddress() const;
};
class INetHandler {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual bool resolve(const char* addr, std::string& out);
};
class NetServer {
public:
    virtual ~NetServer();
    bool getConnectionIp(int id, std::string& out);
    void* m_pad8;
    std::map<int, SWConnection*> m_connections;
    char m_pad[0x4c8 - 0x40];
    INetHandler* m_handler;
};
bool NetServer::getConnectionIp(int id, std::string& out)
{
    std::map<int, SWConnection*>::iterator it = m_connections.find(id);
    if (it != m_connections.end() && it->second)
        return m_handler->resolve(it->second->getPeerAddress(), out);
    return false;
}
} } }
