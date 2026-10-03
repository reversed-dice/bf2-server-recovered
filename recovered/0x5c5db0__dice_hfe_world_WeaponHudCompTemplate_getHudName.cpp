// FUNCTION: BF2 0x5c5db0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x28];
    std::string m_str;
    std::string getHudName() const;
};
std::string WeaponHudCompTemplate::getHudName() const {
    return m_str;
}
} } }
