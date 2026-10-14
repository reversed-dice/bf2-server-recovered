// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x549650
#include <vector>
#include <algorithm>

namespace dice { namespace hfe { namespace world {

class IObject;

class Soldier {
public:
    char _pad0[0x298];
    std::vector<IObject*> m_weapons;
    std::vector<IObject*> m_slots[3];
    IObject* m_currents[3];
    void removeWeapon(IObject* weapon);
};

void Soldier::removeWeapon(IObject* weapon)
{
    for (unsigned int i = 0; i < m_weapons.size(); ++i) {
        if (m_weapons[i] == weapon) {
            m_weapons.erase(m_weapons.begin() + i);
            break;
        }
    }
    for (int i = 0; i < 3; ++i) {
        m_currents[i] = 0;
        std::vector<IObject*>::iterator it = std::find(m_slots[i].begin(), m_slots[i].end(), weapon);
        if (it != m_slots[i].end())
            m_slots[i].erase(it);
    }
}

} } }
