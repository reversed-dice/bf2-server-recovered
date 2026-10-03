// FUNCTION: BF2 0x5bb940
#include <string>

namespace dice { namespace hfe { namespace world {
class AbilityHudCompTemplate {
public:
    unsigned char _pad[0x18];
    std::string m_str;
    std::string AbilityHudCompTemplate_getHealingSound() const;
};
std::string AbilityHudCompTemplate::AbilityHudCompTemplate_getHealingSound() const {
    return m_str;
}
} } }
