// FUNCTION: BF2 0x5c3720
#include <string>

namespace dice { namespace hfe { namespace world {
class WarningHudCompTemplate {
public:
    unsigned char _pad[0x40];
    std::string m_str;
    std::string WarningHudCompTemplate_getWarningIcon() const;
};
std::string WarningHudCompTemplate::WarningHudCompTemplate_getWarningIcon() const {
    return m_str;
}
} } }
