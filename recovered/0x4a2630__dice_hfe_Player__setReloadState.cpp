// FUNCTION: BF2 0x4a2630
namespace dice { namespace hfe {
class Player {
public:
    void setReloadState();
    // ... other members
    unsigned char m_reloadState;  // +0x2D8
};

void Player::setReloadState() {
    *(unsigned char*)((char*)this + 0x2D8) = 1;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::setReloadState (0x4a2630)