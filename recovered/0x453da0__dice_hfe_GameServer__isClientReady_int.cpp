// FUNCTION: BF2 0x453da0
namespace dice { namespace hfe {
class GameServer {
public:
    void* getClient(int arg) const;
    int isClientReady_int(int arg) const;
};
int GameServer::isClientReady_int(int arg) const {
    void* client = getClient(arg);
    int result = 0;
    if (client == 0) {
        result = 0;
    } else {
        result = *(int*)((char*)client + 0x18) > 3 ? 1 : 0;
    }
    return result;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameServer::isClientReady_int (0x453da0)