// FUNCTION: BF2 0x453d10
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1f4];
    int field;
    int getNumOvershotFrames() const;
};
int GameServer::getNumOvershotFrames() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNumOvershotFrames (0x453d10)
