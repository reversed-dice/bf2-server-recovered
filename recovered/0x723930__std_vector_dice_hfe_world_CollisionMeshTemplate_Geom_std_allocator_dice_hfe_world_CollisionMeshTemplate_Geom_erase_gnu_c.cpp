// FUNCTION: BF2 0x723930
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe { namespace world { namespace CollisionMeshTemplate {
struct Lod;
struct Geom {
    std::vector<Lod*> m_lods;
    void* m_unk18;
    void* m_unk20;
    int m_unk28;
};
} } } }

template class std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> >;
