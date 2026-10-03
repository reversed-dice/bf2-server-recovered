// FUNCTION: BF2 0x5c2620
#include <string>

namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
public:
    unsigned char _pad[0xe0];
    std::string m_str;
    std::string VehicleHudCompTemplate_getSpottedIcon() const;
};
std::string VehicleHudCompTemplate::VehicleHudCompTemplate_getSpottedIcon() const {
    return m_str;
}
} } }
