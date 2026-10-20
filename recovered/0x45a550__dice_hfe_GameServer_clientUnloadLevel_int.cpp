// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x45a550
#include <string>
#include <vector>
#include <map>

namespace dice { namespace hfe {

class MapInfo {
public:
    MapInfo();
    void clear();
    long getNetBufferSize() const;
    void const* getNetBuffer() const;
    std::string m_name;
    std::string m_mode;
    std::string m_description;
    int m_maxPlayers;
    bool m_enabled;
    int m_size;
    short m_24;
    bool m_custom;
    std::vector<int> m_sizes;
};

class Client {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11(int);
    char pad[0x10];
    int m_priority;
};

class GameServer {
public:
    Client* getClient(int) const;
    void sendDataBlock(int, unsigned int, void const*, unsigned int, bool);
    void sendDataBlockToAll(unsigned int, void const*, unsigned int, bool);
    void clientUnloadLevel(int clientId);
    char pad[0xe8];
    std::map<int, Client*> m_clients;
};

void GameServer::clientUnloadLevel(int clientId) {
    MapInfo mi;
    mi.clear();
    if (clientId == -1) {
        long size = mi.getNetBufferSize();
        void const* buf = mi.getNetBuffer();
        sendDataBlockToAll(2, buf, (unsigned int)size, false);
        std::map<int, Client*>::iterator it = m_clients.begin();
        std::map<int, Client*>::iterator end = m_clients.end();
        while (it != end) {
            it->second->m_priority = 1;
            it->second->_v11(0);
            ++it;
        }
    } else {
        long size = mi.getNetBufferSize();
        void const* buf = mi.getNetBuffer();
        sendDataBlock(clientId, 2, buf, (unsigned int)size, false);
        Client* c = getClient(clientId);
        if (c) {
            c->_v11(0);
        }
    }
}

} }
