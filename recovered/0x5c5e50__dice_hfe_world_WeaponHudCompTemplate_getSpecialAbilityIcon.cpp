// FUNCTION: BF2 0x5c5e50
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xa0];
    std::string m_str;
    std::string getSpecialAbilityIcon() const;
};
std::string WeaponHudCompTemplate::getSpecialAbilityIcon() const {
    return m_str;
}
} } }
