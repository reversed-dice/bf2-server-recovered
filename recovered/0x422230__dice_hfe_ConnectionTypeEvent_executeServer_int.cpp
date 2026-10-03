// FUNCTION: BF2 0x422230
namespace dice { namespace hfe {

class IConnectionHandler {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11)
#undef V
    virtual void setConnectionType(int playerId, int type);
    virtual void connectionTypeChanged();
};
class IGameServer {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual IConnectionHandler* queryInterface(int id);
};
extern IGameServer* g_gameServer;
extern int g_connectionHandlerId;

class ConnectionTypeEvent {
public:
    bool executeServer(int playerId);
    char _pad0[0x10];
    unsigned char m_type;
};

bool ConnectionTypeEvent::executeServer(int playerId)
{
    IConnectionHandler* h = g_gameServer->queryInterface(g_connectionHandlerId);
    if (!h)
        return false;
    h->setConnectionType(playerId, m_type);
    h->connectionTypeChanged();
    return true;
}

} }
