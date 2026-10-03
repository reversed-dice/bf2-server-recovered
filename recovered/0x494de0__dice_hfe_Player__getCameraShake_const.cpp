// FUNCTION: BF2 0x494de0
namespace dice { namespace hfe {
class Player {
public:
    float getCameraShake_const() const;
};

float Player::getCameraShake_const() const {
    return *(float*)((char*)this + 0x218);
}
// REVERSED_FUNCTION: dice::hfe::Player::getCameraShake_const (0x494de0)
} }