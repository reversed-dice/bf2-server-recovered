// FUNCTION: BF2 0x464d40
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1f8];
    bool field;
    int getIsInternetServer() const;
};
int GameServer::getIsInternetServer() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getIsInternetServer (0x464d40)
