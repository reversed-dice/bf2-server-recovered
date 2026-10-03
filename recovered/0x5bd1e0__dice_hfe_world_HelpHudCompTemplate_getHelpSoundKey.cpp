// FUNCTION: BF2 0x5bd1e0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x20];
    std::string m_str;
    std::string HelpHudCompTemplate_getHelpSoundKey() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getHelpSoundKey() const {
    return m_str;
}
} } }
