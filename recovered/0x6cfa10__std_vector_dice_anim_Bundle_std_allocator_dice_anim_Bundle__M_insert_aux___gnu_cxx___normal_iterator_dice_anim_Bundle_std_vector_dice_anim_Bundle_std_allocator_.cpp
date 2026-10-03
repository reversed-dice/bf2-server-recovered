// FUNCTION: BF2 0x6cfa10
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::anim::Bundle*, std::allocator<dice::anim::Bundle*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace anim { struct Bundle; } }

template class std::vector<dice::anim::Bundle*, std::allocator<dice::anim::Bundle*> >;
