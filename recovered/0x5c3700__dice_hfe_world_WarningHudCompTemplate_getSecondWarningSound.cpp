// FUNCTION: BF2 0x5c3700
#include <string>

namespace dice { namespace hfe { namespace world {
class WarningHudCompTemplate {
public:
    unsigned char _pad[0x30];
    std::string m_str;
    std::string WarningHudCompTemplate_getSecondWarningSound() const;
};
std::string WarningHudCompTemplate::WarningHudCompTemplate_getSecondWarningSound() const {
    return m_str;
}
} } }
