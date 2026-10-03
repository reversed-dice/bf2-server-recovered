// FUNCTION: BF2 0x5bd2e0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x60];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpSoundKeyEnemy() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpSoundKeyEnemy() const {
    return m_str;
}
} } }
