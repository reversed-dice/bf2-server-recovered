// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x559260
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class SupplyDepotTemplate {
public:
    char _pad[0x280];
    std::vector<std::string> m_vehicleNames; // +0x280
    std::vector<float> m_f298;               // +0x298
    std::vector<float> m_f2b0;               // +0x2b0
    std::vector<float> m_f2c8;               // +0x2c8
    std::vector<float> m_f2e0;               // +0x2e0
    std::vector<float> m_f2f8;               // +0x2f8

    void addVehicleType(std::string name, int type, float f1, float f2);
};

void SupplyDepotTemplate::addVehicleType(std::string name, int type, float f1, float f2) {
    m_vehicleNames.push_back(name);
    m_f298.push_back((float)type);
    m_f2b0.push_back((float)type);
    m_f2c8.push_back(f1);
    m_f2e0.push_back(1.0f / f1);
    m_f2f8.push_back(f2);
}

} } }
