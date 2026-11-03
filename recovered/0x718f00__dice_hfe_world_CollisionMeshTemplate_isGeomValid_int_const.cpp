// FUNCTION: BF2 0x718f00
#include <vector>

namespace dice { namespace hfe { namespace world {

struct Geom {
    std::vector<int> m_data;   // +0x0 (begin, end, cap)
    char pad[0x30 - 0x18];
};

class CollisionMeshTemplate {
public:
    char pad[0x8];
    std::vector<Geom> m_geoms;   // 0x8

    bool isGeomValid(int index) const;
};

bool CollisionMeshTemplate::isGeomValid(int index) const
{
    if ((unsigned int)index < m_geoms.size() && m_geoms[index].m_data.begin() != m_geoms[index].m_data.end())
        return true;
    return false;
}

}}}
