// FUNCTION: BF2 0x845520
#include <map>
namespace VOIP { struct ClientData { char b[32]; }; }

struct VOIP_CClients {
    void* pad0;
    std::map<unsigned short, VOIP::ClientData> m_clients;
};

bool VOIP_CClients_Reset(VOIP_CClients* c) {
    c->m_clients.clear();
    return true;
}
