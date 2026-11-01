// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x45fa40
#include <map>
#include <string>

namespace dice { namespace hfe {

struct DisconnectType {
    int a;
    int b;
    std::string s;
    DisconnectType() {}
    DisconnectType(int aa, int bb, std::string const& ss) : a(aa), b(bb), s(ss) {}
};

typedef std::map<int, DisconnectType> DisconnectMap;

class ClientConnection {
public:
    char m_pad[0x18];
    int m_18;
    char m_pad2[0x0c];
    float m_28;
    float m_2c;
    char m_pad3[0x180];
    int m_1b0;
    bool handlePacketStatusNotification(bool& flag);
};

class GameServer {
public:
    char m_pad[0xb0];
    void* m_net;
    DisconnectMap m_disconnects;
    std::map<int, ClientConnection*> m_clients;
    char m_pad2[0x20];
    static float nextTimerSync;
    int m_138;
    void clientSendDatabase(int id);
    void updateConnections(float dt);
};

void GameServer::updateConnections(float dt) {
    if (m_net == 0)
        return;
    nextTimerSync -= dt;
    if (nextTimerSync <= 0.0f) {
        nextTimerSync = 10.0f;
        ((void (*)(void*))(*(void***)this)[0x2a8 / 8])(this);
    }
    for (std::map<int, ClientConnection*>::iterator it = m_clients.begin(); it != m_clients.end(); ++it) {
        ClientConnection* c = it->second;
        int id = (unsigned char)it->first;
        if (m_138 == 2 && c->m_18 == 2)
            clientSendDatabase(id);
        c->m_28 -= dt;
        c->m_2c -= dt;
        int v;
        if (((bool (*)(void*, int, int*))(*(void***)m_net)[0x100 / 8])(m_net, id, &v))
            c->m_1b0 = v;
        bool b;
        while (((bool (*)(void*, int, bool*))(*(void***)m_net)[0xb0 / 8])(m_net, id, &b)) {
            if (c->handlePacketStatusNotification(b))
                continue;
            std::string reason("");
            DisconnectType dt((unsigned char)it->first, 0x1c, reason);
            m_disconnects[(unsigned char)it->first] = dt;
        }
    }
}

} }
