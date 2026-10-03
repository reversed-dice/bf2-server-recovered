// FUNCTION: BF2 0x5c25c0
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0xd0];
    std::string m_str;
    std::string VehicleHudCompTemplate_getMiniMapIcon() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getMiniMapIcon() const {
    return m_str;
}
} } }
