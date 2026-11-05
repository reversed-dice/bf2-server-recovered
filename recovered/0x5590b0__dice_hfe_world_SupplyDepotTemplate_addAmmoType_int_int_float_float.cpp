// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5590b0
#include <vector>

namespace dice { namespace hfe { namespace world {

class SupplyDepotTemplate {
public:
    char _pad[0x1d8];
    std::vector<int> m_ammoTypes;   // 0x1d8
    std::vector<float> m_a;         // 0x1f0
    std::vector<float> m_b;         // 0x208
    std::vector<float> m_c;         // 0x220
    std::vector<float> m_d;         // 0x238
    std::vector<float> m_e;         // 0x250

    void addAmmoType(int ammoType, int count, float f1, float f2);
};

void SupplyDepotTemplate::addAmmoType(int ammoType, int count, float f1, float f2)
{
    m_ammoTypes.push_back(ammoType);
    m_a.push_back((float)count);
    m_b.push_back((float)count);
    m_c.push_back(f1);
    m_d.push_back(1.0f / f1);
    m_e.push_back(f2);
}

} } }
