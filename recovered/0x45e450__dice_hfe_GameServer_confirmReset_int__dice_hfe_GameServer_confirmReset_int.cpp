// FUNCTION: BF2 0x45e450
namespace dice { namespace hfe {

class GameServer {
public:
    void* getClient() const;
    void confirmReset(int);
};

void GameServer::confirmReset(int) {
    void* client = getClient();
    if (client != 0) {
        *(unsigned char*)((char*)client + 0x1c) = 1;
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_confirmReset_int (0x45e450)