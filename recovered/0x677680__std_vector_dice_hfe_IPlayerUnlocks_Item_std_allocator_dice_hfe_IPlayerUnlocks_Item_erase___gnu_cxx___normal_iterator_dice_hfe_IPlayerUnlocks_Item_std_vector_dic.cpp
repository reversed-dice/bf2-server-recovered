// FUNCTION: BF2 0x677680
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::IPlayerUnlocks::Item, std::allocator<dice::hfe::IPlayerUnlocks::Item> >

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

namespace dice { namespace hfe { namespace IPlayerUnlocks { struct Item { float x, y; }; } } }

template class std::vector<dice::hfe::IPlayerUnlocks::Item, std::allocator<dice::hfe::IPlayerUnlocks::Item> >;
