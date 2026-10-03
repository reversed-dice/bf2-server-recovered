// FUNCTION: BF2 0x4a27d0
namespace dice { namespace hfe {
class Player {
public:
    unsigned int getHitIndicator() const;
};

unsigned int Player::getHitIndicator() const {
    unsigned char* p = (unsigned char*)const_cast<dice::hfe::Player*>(this) + 0x2F4;
    unsigned char old = *p;
    *p = 0;
    return old;
}
// REVERSED_FUNCTION: dice::hfe::Player::getHitIndicator_const (0x4a27d0)
} }