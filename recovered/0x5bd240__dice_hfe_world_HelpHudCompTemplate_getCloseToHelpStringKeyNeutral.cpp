// FUNCTION: BF2 0x5bd240
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x38];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpStringKeyNeutral() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpStringKeyNeutral() const {
    return m_str;
}
} } }
