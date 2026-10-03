// FUNCTION: BF2 0x5c2740
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0x50];
    std::string m_str;
    std::string VehicleHudCompTemplate_getInjurySound() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getInjurySound() const {
    return m_str;
}
} } }
