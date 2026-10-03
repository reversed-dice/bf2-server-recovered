// FUNCTION: BF2 0x5c2460
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0x38];
    std::string m_str;
    std::string VehicleHudCompTemplate_getHudName() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getHudName() const {
    return m_str;
}
} } }
