// FUNCTION: BF2 0x5115f0
#include <vector>

namespace dice {
namespace hfe {
namespace world {

struct SupplyGroup {
    int id;
};

struct ControlPointData {
    char pad[0x250];
    std::vector<SupplyGroup> m_supplyGroupsNeeded[2];
};

class ControlPoint {
public:
    char pad[0x248];
    ControlPointData* m_data; // 0x248

    bool getSupplyGroupsNeeded(int team, std::vector<SupplyGroup>& out);
};

bool ControlPoint::getSupplyGroupsNeeded(int team, std::vector<SupplyGroup>& out) {
    if ((unsigned int)(team - 1) > 1) {
        return false;
    }
    out = m_data->m_supplyGroupsNeeded[team - 1];
    return true;
}

}
}
}
