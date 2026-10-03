// FUNCTION: BF2 0x5c2600
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0x30];
    std::string m_str;
    std::string VehicleHudCompTemplate_getMiniMapIconLeaderSize() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getMiniMapIconLeaderSize() const {
    return m_str;
}
} } }
