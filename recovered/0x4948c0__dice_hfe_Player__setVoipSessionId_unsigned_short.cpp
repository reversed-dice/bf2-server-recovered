// FUNCTION: BF2 0x4948c0
namespace dice { namespace hfe {
class Player {
public:
    void setVoipSessionId_unsigned_short(unsigned short value);
};

void Player::setVoipSessionId_unsigned_short(unsigned short value) {
    *(unsigned short*)((char*)this + 0x3ea) = value;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::setVoipSessionId_unsigned_short (0x4948c0)