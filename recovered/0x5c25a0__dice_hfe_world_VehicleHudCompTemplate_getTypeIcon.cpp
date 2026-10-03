// FUNCTION: BF2 0x5c25a0
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0xd8];
    std::string m_str;
    std::string VehicleHudCompTemplate_getTypeIcon() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getTypeIcon() const {
    return m_str;
}
} } }
