// FUNCTION: BF2 0x464cc0
namespace dice { namespace hfe {

class StatsMonitor;

class GameServer {
public:
    StatsMonitor* getStatsMonitor() const;
private:
    unsigned char m_pad[0x200];
    StatsMonitor* m_statsMonitor;
};

StatsMonitor* GameServer::getStatsMonitor() const {
    return m_statsMonitor;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getStatsMonitor_const (0x464cc0)