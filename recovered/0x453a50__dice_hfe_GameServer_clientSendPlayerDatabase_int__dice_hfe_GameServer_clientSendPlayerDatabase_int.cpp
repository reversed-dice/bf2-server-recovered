// FUNCTION: BF2 0x453a50
namespace dice { namespace hfe {

class GameServer {
public:
    void* getClient() const;
    void clientSendPlayerDatabase();
};

class ServerConnection {
public:
    static void clientSendPlayerDatabase(void* client);
};

} }

void dice::hfe::GameServer::clientSendPlayerDatabase() {
    void* c = getClient();
    ServerConnection::clientSendPlayerDatabase(c);
    (*reinterpret_cast<unsigned int*>(static_cast<char*>(c) + 0x18)) = 1;
}
// REVERSED_FUNCTION: dice_hfe_GameServer_clientSendPlayerDatabase_int (0x453a50)