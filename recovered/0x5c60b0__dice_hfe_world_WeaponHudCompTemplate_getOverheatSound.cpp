// FUNCTION: BF2 0x5c60b0
#include <string>

namespace dice { namespace hfe { namespace world {
class WeaponHudCompTemplate {
public:
    unsigned char _pad[0x48];
    std::string m_str;
    std::string getOverheatSound() const;
};
std::string WeaponHudCompTemplate::getOverheatSound() const {
    return m_str;
}
} } }
