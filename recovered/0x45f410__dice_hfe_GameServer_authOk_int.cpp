// FUNCTION: BF2 0x45f410
#include <map>

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
    int m_pad[0x71];
    int m_authCount;
};

class ServerInfo {
public:
    void getDataBlock(void const**, unsigned int*, bool);
};

class MapList {
public:
    unsigned int getDataBlockSize() const;
    void const* getDataBlock() const;
};

extern ServerInfo* serverInfo;
extern MapList* mapList;
bool isExpansionPack();

class GameServer {
public:
    ClientConnection* getClient(int) const;
    void sendDataBlock(int, unsigned int, void const*, unsigned int, bool);
    void authOk(int);
};

void GameServer::authOk(int clientId) {
    ClientConnection* client = getClient(clientId);
    if (!client) return;
    ++client->m_authCount;
    if (isExpansionPack() && client->m_authCount <= 1) return;
    void const* data = "";
    unsigned int size = 0;
    serverInfo->getDataBlock(&data, &size, true);
    sendDataBlock(clientId, 0, data, size, false);
    unsigned int mapSize = mapList->getDataBlockSize();
    void const* mapBlock = mapList->getDataBlock();
    sendDataBlock(clientId, 5, mapBlock, mapSize, false);
}

} }
