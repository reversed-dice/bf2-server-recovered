// FUNCTION: BF2 0x5bd1c0
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x18];
    std::string m_str;
    std::string HelpHudCompTemplate_getHelpStringKey() const;
};
std::string HelpHudCompTemplate::HelpHudCompTemplate_getHelpStringKey() const {
    return m_str;
}
} } }
