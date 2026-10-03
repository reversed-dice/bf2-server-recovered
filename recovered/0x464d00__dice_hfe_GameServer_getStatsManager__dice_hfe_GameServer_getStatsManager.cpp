// FUNCTION: BF2 0x464d00
namespace dice { namespace hfe {

class StatsManager;

class GameServer {
    unsigned char _pad0[0x188];
    StatsManager* m_statsManager;
public:
    StatsManager* getStatsManager() const;
};

StatsManager* GameServer::getStatsManager() const {
    return m_statsManager;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getStatsManager (0x464d00)