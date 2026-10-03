// FUNCTION: BF2 0x5bb960
#include <string>

namespace dice { namespace hfe { namespace world {
class AbilityHudCompTemplate {
public:
    unsigned char _pad[0x20];
    std::string m_str;
    std::string AbilityHudCompTemplate_getRepairingSound() const;
};
std::string AbilityHudCompTemplate::AbilityHudCompTemplate_getRepairingSound() const {
    return m_str;
}
} } }
