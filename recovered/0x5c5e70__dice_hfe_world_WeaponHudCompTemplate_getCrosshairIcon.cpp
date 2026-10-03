// FUNCTION: BF2 0x5c5e70
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xb0];
    std::string m_str;
    std::string getCrosshairIcon() const;
};
std::string WeaponHudCompTemplate::getCrosshairIcon() const {
    return m_str;
}
} } }
