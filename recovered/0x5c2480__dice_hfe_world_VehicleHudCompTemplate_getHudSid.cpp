// FUNCTION: BF2 0x5c2480
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0x40];
    std::string m_str;
    std::string VehicleHudCompTemplate_getHudSid() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getHudSid() const {
    return m_str;
}
} } }
