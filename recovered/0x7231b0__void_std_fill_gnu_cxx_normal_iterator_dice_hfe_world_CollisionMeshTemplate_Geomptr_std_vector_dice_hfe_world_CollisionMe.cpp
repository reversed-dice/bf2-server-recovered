// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x7231b0
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::

#include <map>
#include <vector>
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
    void* m_p1;
    void* m_p2;
    int m_i;
};
} } } }

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> > >, dice::hfe::world::CollisionMeshTemplate::Geom>(__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> > >, __gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> > >, dice::hfe::world::CollisionMeshTemplate::Geom const&);
