// FUNCTION: BF2 0x464d00
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x188];
    void* field;
    void* getStatsManager() const;
};
void* GameServer::getStatsManager() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getStatsManager (0x464d00)
