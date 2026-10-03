// FUNCTION: BF2 0x6cfb70
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::anim::Trigger*, std::allocator<dice::anim::Trigger*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace anim { struct Trigger; } }

template class std::vector<dice::anim::Trigger*, std::allocator<dice::anim::Trigger*> >;
