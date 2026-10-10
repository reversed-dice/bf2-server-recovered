// FUNCTION: BF2 0x4cb380
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class CombatArea {
public:
    char _pad0[0x18];
    std::string m_name;
    char _pad1[0x5];
    bool m_isAi;
};

class CombatAreaManager {
public:
    bool getAiCombatAreas(std::vector<CombatArea*>& out);

private:
    CombatArea* m_active;
    std::vector<CombatArea*> m_areas;
};

bool CombatAreaManager::getAiCombatAreas(std::vector<CombatArea*>& out)
{
    for (unsigned int i = 0; i < m_areas.size(); i++) {
        CombatArea* area = m_areas[i];
        if (area->m_isAi)
            out.push_back(area);
    }
    return out.size() > 0 && out.size() - 1 == 0;
}

} }
