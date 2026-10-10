// FUNCTION: BF2 0x558f00
#include <vector>

namespace dice { namespace hfe { namespace world {

class SupplyDepot {
public:
    char _pad[0x2a8];
    std::vector<unsigned int> m_vehicleTypes; // +0x2a8

    bool hasVehicleType(unsigned int vehicleType);
};

bool SupplyDepot::hasVehicleType(unsigned int vehicleType) {
    for (unsigned int i = 0; i < m_vehicleTypes.size(); ++i) {
        if (m_vehicleTypes[i] == vehicleType) {
            return true;
        }
    }
    return false;
}

} } }
