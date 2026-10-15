// FUNCTION: BF2 0x719a70
#include <vector>
namespace dice { namespace hfe { namespace world {
struct Geom { std::vector<void*> m_unk0; char _pad[0x30 - 0x18]; };
struct Lod { char _pad[0xec]; float m_radius; };
class CollisionMeshTemplate {
public:
    void* m_vptr;
    std::vector<Geom> m_geoms;
    bool isGeomValid(int) const __attribute__((pure));
    bool isLodValid(int, int) const __attribute__((pure));
    Lod* getValidLod(int, int) const __attribute__((pure));
    float getMaxBoundingRadius() const;
};
float CollisionMeshTemplate::getMaxBoundingRadius() const {
    for (unsigned int i = 0; i < m_geoms.size(); ++i) {
        if (!isGeomValid(i)) continue;
        const Geom& g = m_geoms[i];
        for (unsigned int j = 0; j < g.m_unk0.size(); ++j) {
            if (!isLodValid(i, j)) continue;
            return getValidLod(i, j)->m_radius;
        }
    }
    return 0;
}
} } }
// BF2_FLAGS: -fno-strict-aliasing
