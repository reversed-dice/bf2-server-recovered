// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x505db0
#include <set>
#include <map>

namespace dice { namespace hfe { namespace world {

class AmbientEffectArea;

extern int areaId;

class AmbientEffectAreaManager {
public:
    std::set<AmbientEffectArea*> m_areas;
    std::map<int, AmbientEffectArea*> m_areaMap;

    void removeAll();
};

void AmbientEffectAreaManager::removeAll() {
    m_areas.clear();
    m_areaMap.clear();
    areaId = 0;
}

} } }
