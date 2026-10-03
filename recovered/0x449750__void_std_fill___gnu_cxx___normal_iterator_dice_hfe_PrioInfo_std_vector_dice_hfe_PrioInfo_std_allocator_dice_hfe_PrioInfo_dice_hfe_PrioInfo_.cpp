// FUNCTION: BF2 0x449750
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::PrioInfo*, std::vector<dice::hfe::PrioInfo, std::alloca

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

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::PrioInfo*, std::vector<dice::hfe::PrioInfo, std::allocator<dice::hfe::PrioInfo> > >, dice::hfe::PrioInfo>(__gnu_cxx::__normal_iterator<dice::hfe::PrioInfo*, std::vector<dice::hfe::PrioInfo, std::allocator<dice::hfe::PrioInfo> > >, __gnu_cxx::__normal_iterator<dice::hfe::PrioInfo*, std::vector<dice::hfe::PrioInfo, std::allocator<dice::hfe::PrioInfo> > >, dice::hfe::PrioInfo const&);
