// FUNCTION: BF2 0x5c5ed0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xc8];
    std::string m_str;
    std::string getAmmoBarBackIcon() const;
};
std::string WeaponHudCompTemplate::getAmmoBarBackIcon() const {
    return m_str;
}
} } }
