// FUNCTION: BF2 0x4653e0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x90];
    int field;
    int getRef() const;
};
int GameServer::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getRef (0x4653e0)
