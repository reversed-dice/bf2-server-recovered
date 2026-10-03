// FUNCTION: BF2 0x496280
typedef unsigned long long Flag32Bits;

namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
    unsigned int flags;
    unsigned int mask;
};

} } }

namespace dice { namespace hfe {

class Player {
public:
    unsigned int updateFlags(unsigned int currentFlags, Flag32Bits newFlags);
    void setFlags(Flag32Bits flags, world::IPlayer const& player);

private:
    unsigned char _pad[0x7C];
public:
    unsigned int m_flags;
};

void Player::setFlags(Flag32Bits flags, world::IPlayer const& /*unused*/ player) {
    m_flags = updateFlags(m_flags, flags);
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setFlags_dice_hfe_Flag32Bits_dice_hfe_world_IPlayer_constref (0x496280)