// FUNCTION: BF2 0x5c5df0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x90];
    std::string m_str;
    std::string getWeaponIcon() const;
};
std::string WeaponHudCompTemplate::getWeaponIcon() const {
    return m_str;
}
} } }
