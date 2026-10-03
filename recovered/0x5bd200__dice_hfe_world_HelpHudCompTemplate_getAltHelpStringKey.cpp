// FUNCTION: BF2 0x5bd200
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x28];
    std::string m_str;
    std::string HelpHudCompTemplate_getAltHelpStringKey() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getAltHelpStringKey() const {
    return m_str;
}
} } }
