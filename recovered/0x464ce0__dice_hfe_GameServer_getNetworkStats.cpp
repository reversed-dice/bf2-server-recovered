// FUNCTION: BF2 0x464ce0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x160];
    void* field;
    void* getNetworkStats() const;
};
void* GameServer::getNetworkStats() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getNetworkStats (0x464ce0)
