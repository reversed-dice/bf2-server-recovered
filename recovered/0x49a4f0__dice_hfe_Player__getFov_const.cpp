// FUNCTION: BF2 0x49a4f0
namespace dice { namespace hfe {
class Player {
public:
    float getFov_const() const;
};

float Player::getFov_const() const {
    return *(float*)((char*)this + 0xe0);
}
// REVERSED_FUNCTION: dice::hfe::Player::getFov_const (0x49a4f0)
} }