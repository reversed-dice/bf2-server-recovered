// FUNCTION: BF2 0x4924a0
// void std::__uninitialized_fill_n_a<dice::hfe::Vec3*, unsigned long, dice::hfe::Vec3, dice::hfe::Vec3>(dice::hf

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

namespace dice { namespace hfe { struct Vec3 { void* p; ~Vec3(); }; } }

template void std::__uninitialized_fill_n_a<dice::hfe::Vec3*, unsigned long, dice::hfe::Vec3, dice::hfe::Vec3>(dice::hfe::Vec3*, unsigned long, dice::hfe::Vec3 const&, std::allocator<dice::hfe::Vec3>);
