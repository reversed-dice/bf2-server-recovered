// FUNCTION: BF2 0x5c2720
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0x48];
    std::string m_str;
    std::string VehicleHudCompTemplate_getPantingSound() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getPantingSound() const {
    return m_str;
}
} } }
