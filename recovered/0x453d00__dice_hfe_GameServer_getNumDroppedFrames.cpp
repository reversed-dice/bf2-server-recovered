// FUNCTION: BF2 0x453d00
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1f0];
    int field;
    int getNumDroppedFrames() const;
};
int GameServer::getNumDroppedFrames() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNumDroppedFrames (0x453d00)
