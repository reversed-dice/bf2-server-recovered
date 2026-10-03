// FUNCTION: BF2 0x4a27f0
namespace dice { namespace hfe {
class Player {
public:
    float getCrossHairFadeValue_const() const;
};

float Player::getCrossHairFadeValue_const() const {
    return *(float*)((char*)this + 0x2f0);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getCrossHairFadeValue_const (0x4a27f0)