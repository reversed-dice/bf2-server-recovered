// FUNCTION: BF2 0x505e60
// BF2_FLAGS: -fno-strict-aliasing

#include <set>
#include <map>

namespace dice { namespace hfe { namespace world {

class AmbientEffectArea {
public:
    char _pad[0x260];
    int m_id; // +0x260
};

class AmbientEffectAreaManager {
public:
    std::set<AmbientEffectArea*> m_areas; // 0x0
    std::map<int, AmbientEffectArea*> m_areaMap; // 0x30

    void addAmbientEffectArea(AmbientEffectArea* area);
};

void AmbientEffectAreaManager::addAmbientEffectArea(AmbientEffectArea* area) {
    std::pair<std::set<AmbientEffectArea*>::iterator, bool> p = m_areas.insert(area);
    std::pair<std::set<AmbientEffectArea*>::iterator, bool> p2 = p;
    (void)p2;
    int id = area->m_id;
    m_areaMap[id] = area;
}

}}}
