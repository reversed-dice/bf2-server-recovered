// FUNCTION: BF2 0x449b70
// void std::__uninitialized_fill_n_a<dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo, dice::hfe::PrioIn

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

namespace dice { namespace hfe { struct PrioInfo { void* p; ~PrioInfo(); }; } }

template void std::__uninitialized_fill_n_a<dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo, dice::hfe::PrioInfo>(dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo const&, std::allocator<dice::hfe::PrioInfo>);
