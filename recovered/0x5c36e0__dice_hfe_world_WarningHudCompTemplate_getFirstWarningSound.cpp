// FUNCTION: BF2 0x5c36e0
#include <string>

namespace dice { namespace hfe { namespace world {
class WarningHudCompTemplate {
public:
    unsigned char _pad[0x28];
    std::string m_str;
    std::string WarningHudCompTemplate_getFirstWarningSound() const;
};
std::string WarningHudCompTemplate::WarningHudCompTemplate_getFirstWarningSound() const {
    return m_str;
}
} } }
