// FUNCTION: BF2 0x5c6070
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x38];
    std::string m_str;
    std::string getFirstLockSound() const;
};
std::string WeaponHudCompTemplate::getFirstLockSound() const {
    return m_str;
}
} } }
