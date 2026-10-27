// FUNCTION: BF2 0x4cb060
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct SubEntry { void* p; };

struct Vec3 { float x, y, z; };

class CombatArea {
public:
    bool m_poly;
    char _pad0[0x17];
    std::string m_name;
    char _pad1[0x4];
    bool m_isAi;
    char _pad2[0x2];
    std::vector<SubEntry> m_subAreas;

    bool checkPositionRect(Vec3 const& pos) const;
    bool checkPositionPolygon(Vec3 const& pos) const;
};

class CombatAreaManager {
public:
    bool isAiPositionInside(Vec3 const& pos, std::vector<CombatArea*> const& areas) const;

private:
    CombatArea* m_active;
    std::vector<CombatArea*> m_areas;
};

} }

namespace dice { namespace hfe { namespace world {
extern "C" void* dice_hfe_world_heightmapCluster;
} } }

typedef void* (*vfn1)(void*);
typedef void (*vfn3)(void*, float*, float*);

bool dice::hfe::CombatAreaManager::isAiPositionInside(Vec3 const& pos, std::vector<CombatArea*> const& areas) const
{
    bool found = false;
    for (unsigned int i = 0; i < areas.size(); i++) {
        if (!areas[i]->m_isAi)
            found = true;
    }

    bool res = false;
    if (!found) {
        res = true;
        void* hc = dice::hfe::world::dice_hfe_world_heightmapCluster;
        void* cell = ((vfn1)(*(void***)hc)[0x88/8])(hc);
        float y0;
        float y1;
        ((vfn3)(*(void***)cell)[0x60/8])(cell, &y0, &y1);
    }

    for (unsigned int i = 0; i < areas.size(); i++) {
        CombatArea* area = areas[i];
        if (area->m_isAi)
            continue;
        int inside;
        if (area->m_poly)
            inside = area->checkPositionPolygon(pos);
        else
            inside = area->checkPositionRect(pos);
        if (inside)
            res = true;
    }

    for (unsigned int i = 0; i < areas.size(); i++) {
        CombatArea* area = areas[i];
        if (!area->m_isAi)
            continue;
        int inside;
        if (area->m_poly)
            inside = area->checkPositionPolygon(pos);
        else
            inside = area->checkPositionRect(pos);
        if (inside)
            res = false;
    }

    return res;
}
