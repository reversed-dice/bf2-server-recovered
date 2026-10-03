// FUNCTION: BF2 0x5c5e10
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x98];
    std::string m_str;
    std::string getAltWeaponIcon() const;
};
std::string WeaponHudCompTemplate::getAltWeaponIcon() const {
    return m_str;
}
} } }
