// FUNCTION: BF2 0x4ca5d0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct SubEntry { void* p; };

class CombatArea {
public:
    char _pad0[0x18];
    std::string m_name;
    char _pad1[0x5];
    bool m_isAi;
    char _pad2[0x2];
    std::vector<SubEntry> m_subAreas;
};

class CombatAreaManager {
public:
    void deleteActiveCombatArea();

private:
    CombatArea* m_active;
    std::vector<CombatArea*> m_areas;
};

void CombatAreaManager::deleteActiveCombatArea()
{
    if (m_active) {
        for (std::vector<CombatArea*>::iterator it = m_areas.begin(); it != m_areas.end(); ++it) {
            if (*it == m_active) {
                m_areas.erase(it);
                delete m_active;
                m_active = 0;
                return;
            }
        }
    }
}

} }
