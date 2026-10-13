// FUNCTION: BF2 0x722c30
// void std::__uninitialized_fill_n_aux<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geo

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

template void std::__uninitialized_fill_n_aux<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> > >, unsigned long, dice::hfe::world::CollisionMeshTemplate::Geom>(__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionMeshTemplate::Geom*, std::vector<dice::hfe::world::CollisionMeshTemplate::Geom, std::allocator<dice::hfe::world::CollisionMeshTemplate::Geom> > >, unsigned long, dice::hfe::world::CollisionMeshTemplate::Geom const&, __false_type);
