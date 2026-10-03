// FUNCTION: BF2 0x4248f0
namespace dice { namespace hfe {

class IDataBlockReceiver {
public:
    virtual void _v0(); virtual void _v1();
    virtual void receiveBlockInfo(int id, int size);
    virtual void receiveBlock(const unsigned char* data, unsigned char size);
};
class IConnection {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual IDataBlockReceiver* getDataBlockReceiver();
};
class IConnectionManager {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14();
    virtual IConnection* getConnection(int playerId);
};
class IGameServer {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual IConnectionManager* queryInterface(int id);
};
extern IGameServer* g_gameServer;
extern int g_connectionManagerId;

class DataBlockEvent {
public:
    bool executeServer(int playerId);
    char _pad0[0x10];
    bool m_isInfo;
    char _pad11[0x3];
    int m_blockId;
    int m_blockSize;
    unsigned char m_dataSize;
    unsigned char m_data[1];
};

bool DataBlockEvent::executeServer(int playerId)
{
    IConnectionManager* m = g_gameServer->queryInterface(g_connectionManagerId);
    if (!m)
        return false;
    IConnection* c = m->getConnection(playerId);
    if (!c)
        return true;
    if (m_isInfo) {
        c->getDataBlockReceiver()->receiveBlockInfo(m_blockId, m_blockSize);
        return true;
    }
    c->getDataBlockReceiver()->receiveBlock(m_data, m_dataSize);
    return true;
}

} }
