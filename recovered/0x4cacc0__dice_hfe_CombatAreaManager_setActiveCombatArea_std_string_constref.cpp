// FUNCTION: BF2 0x4cacc0
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

    std::string getName() const { return m_name; }
};

int compareIgnoreCase(std::string const& a, std::string const& b);

class CombatAreaManager {
public:
    void setActiveCombatArea(std::string const& name);

private:
    CombatArea* m_active;
    std::vector<CombatArea*> m_areas;
};

void CombatAreaManager::setActiveCombatArea(std::string const& name)
{
    for (unsigned int i = 0; i < m_areas.size(); i++) {
        if (!compareIgnoreCase(name, m_areas[i]->getName())) {
            m_active = m_areas[i];
            return;
        }
    }
    m_active = 0;
}

} }
