// FUNCTION: BF2 0x559070
#include <vector>

namespace dice { namespace hfe { namespace world {

class SupplyDepotTemplate {
public:
    char _pad[0x1d8];
    std::vector<int> m_ammoTypes; // +0x1d8

    bool hasAmmoType(int ammoType);
};

bool SupplyDepotTemplate::hasAmmoType(int ammoType) {
    for (unsigned int i = 0; i < m_ammoTypes.size(); ++i) {
        if (m_ammoTypes[i] == ammoType) {
            return true;
        }
    }
    return false;
}

} } }
