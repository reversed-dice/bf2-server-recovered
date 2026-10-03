// FUNCTION: BF2 0x5bd2c0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x48];
    std::string m_str;
    std::string HelpHudCompTemplate_getCloseToHelpStringKeyEnemy() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getCloseToHelpStringKeyEnemy() const {
    return m_str;
}
} } }
