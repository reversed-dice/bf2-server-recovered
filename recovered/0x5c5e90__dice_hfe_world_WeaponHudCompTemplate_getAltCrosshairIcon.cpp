// FUNCTION: BF2 0x5c5e90
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xb8];
    std::string m_str;
    std::string getAltCrosshairIcon() const;
};
std::string WeaponHudCompTemplate::getAltCrosshairIcon() const {
    return m_str;
}
} } }
