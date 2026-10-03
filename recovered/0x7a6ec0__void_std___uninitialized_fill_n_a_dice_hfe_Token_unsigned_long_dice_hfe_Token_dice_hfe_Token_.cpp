// FUNCTION: BF2 0x7a6ec0
// void std::__uninitialized_fill_n_a<dice::hfe::Token*, unsigned long, dice::hfe::Token, dice::hfe::Token>(dice:

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

namespace dice { namespace hfe { struct Token { void* p; ~Token(); }; } }

template void std::__uninitialized_fill_n_a<dice::hfe::Token*, unsigned long, dice::hfe::Token, dice::hfe::Token>(dice::hfe::Token*, unsigned long, dice::hfe::Token const&, std::allocator<dice::hfe::Token>);
