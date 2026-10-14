// FUNCTION: BF2 0x721060
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionFace*, std::vector<dice::hfe::world::Co

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

namespace dice { namespace hfe { namespace world {

struct CollisionFace {
    unsigned short m_v0, m_v1, m_v2, m_v3;
    ~CollisionFace() { }
    CollisionFace& operator=(CollisionFace const& __o) {
        m_v0 = __o.m_v0; m_v1 = __o.m_v1; m_v2 = __o.m_v2; m_v3 = __o.m_v3;
        return *this;
    }
};

} } }

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionFace*, std::vector<dice::hfe::world::CollisionFace, std::allocator<dice::hfe::world::CollisionFace> > >, dice::hfe::world::CollisionFace>(__gnu_cxx::__normal_iterator<dice::hfe::world::CollisionFace*, std::vector<dice::hfe::world::CollisionFace, std::allocator<dice::hfe::world::CollisionFace> > >, __gnu_cxx::__normal_iterator<dice::hfe::world::CollisionFace*, std::vector<dice::hfe::world::CollisionFace, std::allocator<dice::hfe::world::CollisionFace> > >, dice::hfe::world::CollisionFace const&);
