// FUNCTION: BF2 0x4948d0
namespace dice { namespace hfe {

class Player {
public:
    void setOverheadCameraEnabled(bool enabled);
};

void Player::setOverheadCameraEnabled(bool enabled) {
    *reinterpret_cast<unsigned char*>((char*)this + 0xA9) = (unsigned char)enabled;
    if (enabled) {
        return;
    }
    ((void(*)(Player*, unsigned int))(void*)((*(void***)this)[48]))(this, 0);
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setOverheadCameraEnabled_bool (0x4948d0)