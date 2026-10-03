// FUNCTION: BF2 0x5bd280
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x40];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpStringKeyFriendly() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpStringKeyFriendly() const {
    return m_str;
}
} } }
