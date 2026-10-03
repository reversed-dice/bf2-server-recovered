// FUNCTION: BF2 0x494ad0
namespace dice { namespace hfe {
class Player {
public:
    float getNormalizedNightVisionPower() const;
};
float Player::getNormalizedNightVisionPower() const {
    return *reinterpret_cast<float const*>(0x00b2f3bc);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getNormalizedNightVisionPower (0x494ad0)