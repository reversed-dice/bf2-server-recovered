// FUNCTION: BF2 0x464dc0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x300];
    bool field;
    int useContentChecking() const;
};
int GameServer::useContentChecking() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_useContentChecking (0x464dc0)
