// FUNCTION: BF2 0x5bd220
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x30];
    std::string m_str;
    std::string HelpHudCompTemplate_getAltHelpSoundKey() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getAltHelpSoundKey() const {
    return m_str;
}
} } }
