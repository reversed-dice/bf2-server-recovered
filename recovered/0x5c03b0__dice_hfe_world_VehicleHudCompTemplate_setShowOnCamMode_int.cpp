// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c03b0
#include <vector>
namespace dice { namespace hfe { namespace world {
class VehicleHudCompTemplate {
    unsigned char _pad[0x68];
public:
    std::vector<int> m_modes;
public:
    void setShowOnCamMode(int mode);
};
void VehicleHudCompTemplate::setShowOnCamMode(int mode) {
    m_modes.resize(0);
    m_modes.push_back(mode);
}
} } }
