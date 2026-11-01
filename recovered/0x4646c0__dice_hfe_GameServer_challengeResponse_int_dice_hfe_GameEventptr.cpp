// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4646c0
#include <map>
#include <string>

namespace dice { namespace hfe {

namespace io {
enum PResult {
    PRESULT_NONE = 0,
    PRESULT_KICKED = 0x15,
    PRESULT_BANNED = 0x16,
    PRESULT_NEWER = 0x17,
    PRESULT_OLDER = 0x18
};
}

struct DisconnectType {
    int a;
    int b;
    std::string s;
    DisconnectType() {}
    DisconnectType(int aa, int bb, std::string const& ss) : a(aa), b(bb), s(ss) {}
};

typedef std::map<int, DisconnectType> DisconnectMap;

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad0[0x58];
    unsigned int m_netVersion;   // 0x60
    int m_gameId;                // 0x64
};

class IClientConnection {
public:
    char _pad0[0x1a4];
    char m_1a4[0x4c];
    int m_1f0;
};

class Authenticator;
class BanList;

class MatchMakingServer {
public:
    Authenticator* getAuthenticator() const;
};

class BuildNrUtil {
public:
    static int getNetVersionNumber();
};

class BanList {
public:
    static BanList* getInstance();
    bool isKeyBanned(std::string const& key) const;
};

namespace gamespy { extern unsigned int g_gameID; }

extern "C" char* gcd_getkeyhash(int, int);

class GameServer {
public:
    char _pad0[0xb0];
    void* m_connectionManager;               // 0xb0
    DisconnectMap m_disconnects;             // 0xb8
    char _pad1[0x98];                        // 0xe8 -> 0x180
    MatchMakingServer* m_matchMakingServer;  // 0x180

    IClientConnection* getClient(int) const;
    void challengeResponse(int, GameEvent*);
};

void GameServer::challengeResponse(int clientId, GameEvent* ev)
{
    IClientConnection* client = getClient(clientId);
    int netVersion = BuildNrUtil::getNetVersionNumber();
    unsigned int eventVersion = ev->m_netVersion;
    if ((int)eventVersion != netVersion) {
        m_disconnects[clientId] = DisconnectType(clientId,
            eventVersion < (unsigned int)netVersion ? io::PRESULT_NEWER : io::PRESULT_OLDER,
            "");
        return;
    }
    if (client == 0)
        return;
    int authId = ((int (*)(void*, int))(*(void***)m_connectionManager)[0x110 / 8])(m_connectionManager, clientId);
    if (m_matchMakingServer->getAuthenticator() != 0 && authId != 0) {
        if (ev->m_gameId != (int)gamespy::g_gameID)
            client->m_1f0 = ev->m_gameId;
        Authenticator* auth = m_matchMakingServer->getAuthenticator();
        ((void (*)(void*, int, int, int, void*, void*))(*(void***)auth)[0x20 / 8])(auth, ev->m_gameId, clientId, authId,
            client->m_1a4, (char*)ev + 0x10);
    }
    if (BanList::getInstance()->isKeyBanned(std::string(gcd_getkeyhash(gamespy::g_gameID, clientId)))) {
        m_disconnects[clientId] = DisconnectType(clientId, io::PRESULT_BANNED, "");
    }
}

} }
