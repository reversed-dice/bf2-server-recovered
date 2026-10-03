// FUNCTION: BF2 0x464d20
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1f9];
    bool field;
    int getInitComplete() const;
};
int GameServer::getInitComplete() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getInitComplete (0x464d20)
