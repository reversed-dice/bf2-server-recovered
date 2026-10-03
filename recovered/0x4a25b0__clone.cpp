// FUNCTION: BF2 0x4a25b0
namespace dice { namespace hfe {

class Player {
    char _pad[0x1e1];
    bool m_flareFiringState;
public:
    bool setFlareFiringState_bool(bool value);
};

bool Player::setFlareFiringState_bool(bool value) {
    m_flareFiringState = value;
    return value;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setFlareFiringState_bool (0x4a25d0)