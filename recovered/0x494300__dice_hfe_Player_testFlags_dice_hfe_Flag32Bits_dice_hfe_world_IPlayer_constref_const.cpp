// FUNCTION: BF2 0x494300
namespace dice { namespace hfe {
namespace world { class IPlayer; }

template <typename T>
struct Flag32Bits {
    unsigned int setFlags;
    unsigned int unsetFlags;
    bool test(unsigned int val) const {
        if ((val & setFlags) != setFlags)
            return false;
        if ((~val & unsetFlags) != unsetFlags)
            return false;
        return true;
    }
};

class Player {
public:
    char _pad[0x7c];
    unsigned int m_flags;
    bool testFlags(const Flag32Bits<world::IPlayer>& flags) const;
};

bool Player::testFlags(const Flag32Bits<world::IPlayer>& flags) const {
    return flags.test(m_flags);
}
}}
