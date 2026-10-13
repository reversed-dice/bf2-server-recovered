// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x722d30
// void std::__uninitialized_fill_n_aux<dice::hfe::world::CollisionMeshTemplate::Geom*, unsigned long, dice::hfe:

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
    void* m_p1;
    void* m_p2;
    int m_i;
};
} } } }

template void std::__uninitialized_fill_n_aux<dice::hfe::world::CollisionMeshTemplate::Geom*, unsigned long, dice::hfe::world::CollisionMeshTemplate::Geom>(dice::hfe::world::CollisionMeshTemplate::Geom*, unsigned long, dice::hfe::world::CollisionMeshTemplate::Geom const&, __false_type);
