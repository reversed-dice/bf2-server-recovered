// FUNCTION: BF2 0x5c5f10
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xd8];
    std::string m_str;
    std::string getAmmoIcon() const;
};
std::string WeaponHudCompTemplate::getAmmoIcon() const {
    return m_str;
}
} } }
