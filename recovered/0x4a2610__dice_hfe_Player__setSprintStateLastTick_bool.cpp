// FUNCTION: BF2 0x4a2610
namespace dice { namespace hfe {
  class Player {
  public:
    bool setSprintStateLastTick_bool(bool val);
  private:
    char _pad_0x00[0x1E4];
    bool m_sprintStateLastTick;
  };
  
  bool Player::setSprintStateLastTick_bool(bool val) {
    m_sprintStateLastTick = val;
    return val;
  }
} }
// REVERSED_FUNCTION: dice::hfe::Player::setSprintStateLastTick_bool (0x4a2610)