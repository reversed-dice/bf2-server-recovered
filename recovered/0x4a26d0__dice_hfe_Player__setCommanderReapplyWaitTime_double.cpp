// FUNCTION: BF2 0x4a26d0
namespace dice { namespace hfe {

class Player {
public:
    void setCommanderReapplyWaitTime(double val);

private:
    char pad_0x0000_to_0x0158[0x158];

public:
    double m_commanderReapplyWaitTime;
};

void Player::setCommanderReapplyWaitTime(double val) {
    m_commanderReapplyWaitTime = val;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setCommanderReapplyWaitTime_double (0x4a26d0)