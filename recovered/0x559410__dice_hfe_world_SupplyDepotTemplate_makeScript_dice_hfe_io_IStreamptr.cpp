// FUNCTION: BF2 0x559410
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
} } }

namespace dice { namespace hfe { namespace world {
class SimpleObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {

class SupplyDepotTemplate : public ::dice::hfe::world::SimpleObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);

    char _pad0[0x1c8];
    float m_radius;          // 0x1c8
    int m_team;              // 0x1cc
    bool m_workOnVehicles;   // 0x1d0
    bool m_workOnSoldiers;   // 0x1d1
    char _pad1[0x6];
    std::vector<int> m_ammoTypes;   // 0x1d8
    std::vector<float> m_f1f0;      // 0x1f0
    std::vector<float> m_f208;      // 0x208
    std::vector<float> m_f220;      // 0x220
    std::vector<float> m_f238;      // 0x238
    std::vector<float> m_f250;      // 0x250
    float m_f268;            // 0x268
    float m_f26c;
    float m_f270;
    float m_f274;
    float m_f278;
    char _pad6[0x4];
    std::vector<std::string> m_vehicleNames; // 0x280
    std::vector<float> m_f298;
    std::vector<float> m_f2b0;
    std::vector<float> m_f2c8;
    std::vector<float> m_f2e0;
    std::vector<float> m_f2f8;
};

bool SupplyDepotTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!SimpleObjectTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_radius != 2.0f) {
        ss << "ObjectTemplate.radius " << m_radius << std::endl;
    }
    if (m_team != 0) {
        ss << "ObjectTemplate.team " << m_team << std::endl;
    }
    if (m_workOnSoldiers == false) {
        ss << "ObjectTemplate.workOnSoldiers " << false << std::endl;
    }
    if (m_workOnVehicles) {
        ss << "ObjectTemplate.workOnVehicles " << m_workOnVehicles << std::endl;
    }
    for (unsigned int i = 0; i < m_ammoTypes.size(); ++i) {
        ss << "ObjectTemplate.addAmmoType " << m_ammoTypes[i] << " "
           << m_f1f0[i] << " " << m_f220[i] << " " << m_f250[i] << std::endl;
    }
    for (unsigned int i = 0; i < m_vehicleNames.size(); ++i) {
        ss << "ObjectTemplate.addVehicleType " << m_vehicleNames[i] << " "
           << m_f298[i] << " " << m_f2c8[i] << " " << m_f2f8[i] << std::endl;
    }
    ss << "ObjectTemplate.setHealth " << m_f270 << " " << m_f268 << " "
       << m_f278 << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
