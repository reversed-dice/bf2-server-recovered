// FUNCTION: BF2 0x818b80
namespace dice { namespace hfe {

class Client {
    unsigned char pad[0x10];
public:
    unsigned int m_connectionState;
};

class GameServer {
    Client* getClient(int) const;
public:
    unsigned int getConnectionState(int) const;
};

unsigned int GameServer::getConnectionState(int clientIndex) const {
    Client* c = getClient(clientIndex);
    unsigned int r = 0;
    if (c) r = c->m_connectionState;
    return r;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getConnectionState_int_const (0x453dc0)