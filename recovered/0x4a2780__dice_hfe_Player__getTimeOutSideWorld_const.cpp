// FUNCTION: BF2 0x4a2780
namespace dice { namespace hfe {
class Player {
public:
    float getTimeOutSideWorld_const() const;
};

float Player::getTimeOutSideWorld_const() const {
    return *(float*)((char*)this + 0x2e0);
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getTimeOutSideWorld_const (0x4a2780)