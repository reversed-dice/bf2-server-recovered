// FUNCTION: BF2 0x5c5dd0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x30];
    std::string m_str;
    std::string getHudSid() const;
};
std::string WeaponHudCompTemplate::getHudSid() const {
    return m_str;
}
} } }
