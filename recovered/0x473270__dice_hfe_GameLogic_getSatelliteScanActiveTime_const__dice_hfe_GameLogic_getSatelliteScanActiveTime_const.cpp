// FUNCTION: BF2 0x473270
namespace dice { namespace hfe {

class GameLogic {
    unsigned char m_pad[0x45C];
    float m_satelliteScanActiveTime;
public:
    float getSatelliteScanActiveTime() const;
};

float GameLogic::getSatelliteScanActiveTime() const {
    return m_satelliteScanActiveTime;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getSatelliteScanActiveTime_const (0x473270)