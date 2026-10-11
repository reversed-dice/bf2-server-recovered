// FUNCTION: BF2 0x453de0
namespace dice { namespace hfe {

class Connection {
public:
    virtual void send(unsigned int, void const*, unsigned int);
};

class ClientConnection {
public:
    virtual int _v0();
    virtual int _v1();
    virtual int _v2();
    virtual int _v3();
    virtual Connection* getConnection();
    int m_pad[4];
    int m_priority;
};

class GameServer {
public:
    ClientConnection* getClient(int) const;
    void sendDataBlock(int, unsigned int, void const*, unsigned int, bool);
};

void GameServer::sendDataBlock(int clientId, unsigned int arg2, void const* data, unsigned int size, bool b) {
    ClientConnection* client = getClient(clientId);
    if (!client) return;
    if (b && client->m_priority <= 0) return;
    client->getConnection()->send(arg2, data, size);
}

} }
