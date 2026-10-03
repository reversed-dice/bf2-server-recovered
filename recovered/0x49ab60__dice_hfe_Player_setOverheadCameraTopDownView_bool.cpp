// FUNCTION: BF2 0x49ab60
namespace dice { namespace hfe {
class Player {
public:
    void setOverheadCameraTopDownView_bool(bool arg);
};

void Player::setOverheadCameraTopDownView_bool(bool arg)
{
    unsigned char value = (unsigned char)arg;
    ((void (*)(dice::hfe::Player*, int))(*(long long*)(*(long long*)this + 0x190)))(this, (unsigned char)arg);
    if (value != *(unsigned char*)((long long)this + 0xAA))
        *(unsigned char*)((long long)this + 0xAA) = value;
}
// REVERSED_FUNCTION: dice::hfe::Player::setOverheadCameraTopDownView_bool (0x49ab60)
} }