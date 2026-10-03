// FUNCTION: BF2 0x5bd320
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x68];
    std::string m_str;
    std::string getLowArmorHelpStringKey() const;
};
std::string HelpHudCompTemplate::getLowArmorHelpStringKey() const {
    return m_str;
}
} } }
