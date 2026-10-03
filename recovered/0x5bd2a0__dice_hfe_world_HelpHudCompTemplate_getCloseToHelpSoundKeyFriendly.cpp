// FUNCTION: BF2 0x5bd2a0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x58];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpSoundKeyFriendly() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpSoundKeyFriendly() const {
    return m_str;
}
} } }
