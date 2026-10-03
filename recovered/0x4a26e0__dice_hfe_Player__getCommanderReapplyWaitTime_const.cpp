// FUNCTION: BF2 0x4a26e0
namespace dice { namespace hfe {
  class Player {
    char _pad0[0x150];
  public:
    double m_commanderReapplyWaitTime;

    void enableVOHelp_bool();
    virtual unsigned int getKitNetworkValue() const;
    virtual unsigned int getUnlockLevelNetworkValue() const;
    virtual unsigned int getCombinedNetworkValue(unsigned int, unsigned int) const;
    unsigned int getKitAndUnlockLevelNetworkValueConst() const;
    double getCommanderReapplyWaitTime() const;
  };
  double Player::getCommanderReapplyWaitTime() const { return m_commanderReapplyWaitTime; }
} }
// REVERSED_FUNCTION: dice::hfe::Player::getCommanderReapplyWaitTime_const (0x4a26e0)