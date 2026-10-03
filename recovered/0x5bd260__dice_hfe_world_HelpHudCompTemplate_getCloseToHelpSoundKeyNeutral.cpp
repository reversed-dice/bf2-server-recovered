// FUNCTION: BF2 0x5bd260
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x50];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpSoundKeyNeutral() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpSoundKeyNeutral() const {
    return m_str;
}
} } }
