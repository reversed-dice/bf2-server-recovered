// FUNCTION: BF2 0x71c830
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice {
namespace hfe {
namespace world {

struct Lod {
    char pad[0x128];
    std::vector<unsigned short> m_edgeIndices; // 0x128
};

class CollisionMeshTemplate {
public:
    Lod* getValidLod(int geom, int lod);
    void addEdgeIndex(int geom, int lod, int edgeIndex);
};

void CollisionMeshTemplate::addEdgeIndex(int geom, int lod, int edgeIndex) {
    Lod* l = getValidLod(geom, lod);
    l->m_edgeIndices.push_back((unsigned short)edgeIndex);
}

} // namespace world
} // namespace hfe
} // namespace dice
