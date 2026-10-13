// FUNCTION: BF2 0x45f4e0
#include <string>
#include <map>
namespace dice { namespace hfe {
namespace gamespy {
extern unsigned int g_gameID;
}
class IClientConnection;
class Authenticator;
class MatchMakingServer {
public:
    Authenticator* getAuthenticator() const;
};
class GameServer {
public:
    char __pad0[0xe8];
    std::map<unsigned char, IClientConnection*> m_conns;
    IClientConnection* getClient(int clientId) const;
    void closeClientConnection(int clientId, unsigned int pid, std::string const& reason);
};
} }

void dice::hfe::GameServer::closeClientConnection(int clientId, unsigned int pid, std::string const& reason)
{
    dice::hfe::IClientConnection* c = getClient(clientId);
    if (c == 0)
        return;
    int oldId = *(int*)((char*)c + 0x1f0);
    unsigned char key = (unsigned char)clientId;
    m_conns.erase(key);
    ((void (*)(void*))(*(void***)c)[0x8 / 8])(c);
    void* conn = *(void**)((char*)this + 0xb0);
    ((void (*)(void*, int, unsigned int, std::string const&))(*(void***)conn)[0xb8 / 8])(conn, clientId, pid, reason);
    dice::hfe::Authenticator* auth = (*(dice::hfe::MatchMakingServer**)((char*)this + 0x180))->getAuthenticator();
    ((void (*)(void*, unsigned int, int))(*(void***)auth)[0x28 / 8])(auth, dice::hfe::gamespy::g_gameID, clientId);
    if (oldId != -1) {
        dice::hfe::Authenticator* auth2 = (*(dice::hfe::MatchMakingServer**)((char*)this + 0x180))->getAuthenticator();
        ((void (*)(void*, unsigned int, int))(*(void***)auth2)[0x28 / 8])(auth2, oldId, clientId);
    }
}
