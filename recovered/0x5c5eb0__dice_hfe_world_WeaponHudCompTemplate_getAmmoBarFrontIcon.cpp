// FUNCTION: BF2 0x5c5eb0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xc0];
    std::string m_str;
    std::string getAmmoBarFrontIcon() const;
};
std::string WeaponHudCompTemplate::getAmmoBarFrontIcon() const {
    return m_str;
}
} } }
