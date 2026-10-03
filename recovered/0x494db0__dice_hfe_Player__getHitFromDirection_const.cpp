// FUNCTION: BF2 0x494db0
namespace dice { namespace hfe {
class Player {
public:
    float getHitFromDirection_const() const;
};

float Player::getHitFromDirection_const() const {
    return *(float*)((char*)this + 0x210);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getHitFromDirection_const (0x494db0)