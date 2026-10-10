// FUNCTION: BF2 0x510d20
#include <vector>

namespace dice { namespace hfe { namespace world {

struct SupplyGroup {
    unsigned int m_id;
    unsigned int m_pad;
};

class ControlPointTemplate {
public:
    void removeSupplyGroupNeeded(int index, unsigned int group);

    char _pad[0x250];
    std::vector<SupplyGroup> m_supplyGroups[2];
};

void ControlPointTemplate::removeSupplyGroupNeeded(int index, unsigned int group)
{
    if ((unsigned int)(index - 1) > 1) {
        return;
    }
    std::vector<SupplyGroup>& groups = m_supplyGroups[index - 1];
    for (std::vector<SupplyGroup>::iterator it = groups.begin(); it != groups.end(); ++it) {
        if (it->m_id == group) {
            groups.erase(it);
            return;
        }
    }
}

} } }
