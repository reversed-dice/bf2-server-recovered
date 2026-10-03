// FUNCTION: BF2 0x5bd360
#include <string>

namespace dice { namespace hfe { namespace world {
class HelpHudCompTemplate {
public:
    unsigned char _pad[0x78];
    std::string m_str;
    std::string getLowAmmoHelpStringKey() const;
};
std::string HelpHudCompTemplate::getLowAmmoHelpStringKey() const {
    return m_str;
}
} } }
