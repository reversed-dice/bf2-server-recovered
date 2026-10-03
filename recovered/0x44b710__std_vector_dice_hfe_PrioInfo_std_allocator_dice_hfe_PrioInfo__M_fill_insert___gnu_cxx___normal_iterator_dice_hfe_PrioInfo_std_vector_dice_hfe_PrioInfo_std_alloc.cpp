// FUNCTION: BF2 0x44b710
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::PrioInfo, std::allocator<dice::hfe::PrioInfo> >

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

namespace dice { namespace hfe { struct PrioInfo { float x, y; }; } }

template class std::vector<dice::hfe::PrioInfo, std::allocator<dice::hfe::PrioInfo> >;
