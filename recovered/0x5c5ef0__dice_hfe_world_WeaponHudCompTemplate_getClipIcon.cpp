// FUNCTION: BF2 0x5c5ef0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xd0];
    std::string m_str;
    std::string getClipIcon() const;
};
std::string WeaponHudCompTemplate::getClipIcon() const {
    return m_str;
}
} } }
