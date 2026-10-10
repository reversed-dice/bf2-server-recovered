// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x772de0
#include <vector>

namespace dice { namespace hfe {

class CombatArea {};

class CombatAreaManager {
public:
    static CombatAreaManager* m_instance;
    bool getAiCombatAreas(std::vector<CombatArea*>& areas) const;
};

namespace ai {

class BFObjectEnvironment {
public:
    char _pad[0x38];
    mutable std::vector<CombatArea*> m_combatAreas; // 0x38

    bool initAiCombatAreas() const;
};

bool BFObjectEnvironment::initAiCombatAreas() const {

    CombatAreaManager* mgr = CombatAreaManager::m_instance;
    m_combatAreas.resize(0);
    return mgr->getAiCombatAreas(m_combatAreas);
    
}

} } }
