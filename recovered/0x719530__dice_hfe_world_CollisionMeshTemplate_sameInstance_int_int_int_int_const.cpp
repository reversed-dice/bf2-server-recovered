// FUNCTION: BF2 0x719530
#include <vector>
namespace dice { namespace hfe { namespace world {

struct Geom {
    std::vector<void*> m_unk0;
    char _pad[0x30 - 0x18];
};

class CollisionMeshTemplate {
public:
    void* m_vptr;
    std::vector<Geom> m_geoms;
    bool isGeomValid(int) const;
    bool isLodValid(int, int) const;
    bool sameInstance(int g1, int l1, int g2, int l2) const;
};

bool CollisionMeshTemplate::sameInstance(int g1, int l1, int g2, int l2) const {
    if (!isGeomValid(g1)) return false;
    if (!isGeomValid(g2)) return false;
    if (!isLodValid(g1, l1)) return false;
    if (!isLodValid(g2, l2)) return false;
    return m_geoms[g1].m_unk0[l1] == m_geoms[g2].m_unk0[l2];
}

} } }
