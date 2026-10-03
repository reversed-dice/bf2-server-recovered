// FUNCTION: BF2 0x464cc0
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x200];
    void* field;
    void* getStatsMonitor() const;
};
void* GameServer::getStatsMonitor() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getStatsMonitor (0x464cc0)
