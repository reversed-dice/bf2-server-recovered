// FUNCTION: BF2 0x4ca9e0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {
enum VehicleCategory { VC_0, VC_1, VC_2, VC_3 };
} } }

namespace dice { namespace hfe {

using dice::hfe::world::VehicleCategory;

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
    ~CombatAreaManager();

    static CombatAreaManager* m_instance;

private:
    CombatArea* m_active;
    std::vector<CombatArea*> m_areas;
    bool m_flag20;
    char _pad2[0x3];
    float m_24;
    float m_28;
    char _pad3[0x4];
    std::map<VehicleCategory, float> m_mapA;
    std::map<VehicleCategory, float> m_mapB;
};

CombatAreaManager::~CombatAreaManager()
{
    for (unsigned int i = 0; i < m_areas.size(); i++) {
        if (m_areas[i])
            delete m_areas[i];
    }
    m_areas.erase(m_areas.begin(), m_areas.end());
    if (m_instance == this)
        m_instance = 0;
}

CombatAreaManager* CombatAreaManager::m_instance;

} }
