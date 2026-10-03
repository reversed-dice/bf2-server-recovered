// FUNCTION: BF2 0x721310
// void std::__uninitialized_fill_n_a<dice::hfe::world::CollisionFace*, unsigned long, dice::hfe::world::Collisio

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

namespace dice { namespace hfe { namespace world { struct CollisionFace { void* p; ~CollisionFace(); }; } } }

template void std::__uninitialized_fill_n_a<dice::hfe::world::CollisionFace*, unsigned long, dice::hfe::world::CollisionFace, dice::hfe::world::CollisionFace>(dice::hfe::world::CollisionFace*, unsigned long, dice::hfe::world::CollisionFace const&, std::allocator<dice::hfe::world::CollisionFace>);
