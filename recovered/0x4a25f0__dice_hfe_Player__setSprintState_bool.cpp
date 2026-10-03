// FUNCTION: BF2 0x4a25f0
namespace dice { namespace hfe {

class Player {
public:
    bool setSprintState(bool state);

private:
    char _pad_0x00[0x1E3];
    bool m_sprintState;
};

bool Player::setSprintState(bool state) {
    m_sprintState = state;
    return state;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setSprintState_bool (0x4a25f0)