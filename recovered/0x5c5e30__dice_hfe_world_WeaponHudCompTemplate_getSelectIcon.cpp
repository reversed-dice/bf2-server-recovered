// FUNCTION: BF2 0x5c5e30
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0xa8];
    std::string m_str;
    std::string getSelectIcon() const;
};
std::string WeaponHudCompTemplate::getSelectIcon() const {
    return m_str;
}
} } }
