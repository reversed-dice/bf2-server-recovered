// FUNCTION: BF2 0x5c6090
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x40];
    std::string m_str;
    std::string getSecondLockSound() const;
};
std::string WeaponHudCompTemplate::getSecondLockSound() const {
    return m_str;
}
} } }
