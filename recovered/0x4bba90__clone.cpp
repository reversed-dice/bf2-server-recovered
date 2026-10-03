// FUNCTION: BF2 0x4bba90
namespace dice { namespace hfe {
class Player {
public:
    float getNormalizedNightVisionPower() const;
};
float Player::getNormalizedNightVisionPower() const {
    return *reinterpret_cast<float const*>(0x00b378f8);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getNormalizedNightVisionPower (0x494ad0)