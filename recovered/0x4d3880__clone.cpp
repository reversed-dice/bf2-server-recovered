// FUNCTION: BF2 0x4d3880
namespace dice { namespace hfe {
class Player {
public:
    void setReloadState();
    // ... other members
    unsigned char m_reloadState;  // +0x80
};

void Player::setReloadState() {
    *(unsigned char*)((char*)this + 0x80) = 1;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::setReloadState (0x4a2630)