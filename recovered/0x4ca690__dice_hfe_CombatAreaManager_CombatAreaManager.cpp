// FUNCTION: BF2 0x4ca690
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <string>
#include <utility>
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
    CombatAreaManager();

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

CombatAreaManager::CombatAreaManager()
    : m_active(0), m_flag20(false), m_24(10.0f), m_28(20.0f)
{
    m_mapB.insert(std::make_pair(dice::hfe::world::VC_0, 10.0f));
    m_mapB.insert(std::make_pair(dice::hfe::world::VC_2, 10.0f));
    if (m_instance == 0)
        m_instance = this;
}

CombatAreaManager* CombatAreaManager::m_instance;

} }
