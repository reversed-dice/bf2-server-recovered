// FUNCTION: BF2 0x5b8d10
// void std::__uninitialized_fill_n_a<dice::hfe::world::RepairPoint*, unsigned long, dice::hfe::world::RepairPoin

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

namespace dice { namespace hfe { namespace world { struct RepairPoint { void* p; ~RepairPoint(); }; } } }

template void std::__uninitialized_fill_n_a<dice::hfe::world::RepairPoint*, unsigned long, dice::hfe::world::RepairPoint, dice::hfe::world::RepairPoint>(dice::hfe::world::RepairPoint*, unsigned long, dice::hfe::world::RepairPoint const&, std::allocator<dice::hfe::world::RepairPoint>);
