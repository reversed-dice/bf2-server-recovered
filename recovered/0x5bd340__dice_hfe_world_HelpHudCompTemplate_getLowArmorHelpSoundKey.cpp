// FUNCTION: BF2 0x5bd340
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x70];
    std::string m_str;
    std::string getLowArmorHelpSoundKey() const;
};
std::string HelpHudCompTemplate::getLowArmorHelpSoundKey() const {
    return m_str;
}
} } }
