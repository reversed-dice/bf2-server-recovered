// FUNCTION: BF2 0x6c40a0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<dice::anim::RagDoll*, std::pair<dice::anim::RagDoll* const, bool>, std::_Select1st<std::pair<dice::anim::RagDoll* const, bool> >, std::less<dice::anim::RagDoll*>, std::allocator<std::pair<dice::anim::RagDoll* const, bool> > >

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

namespace dice { namespace anim { struct RagDoll ; } }

template class std::_Rb_tree<dice::anim::RagDoll*, std::pair<dice::anim::RagDoll* const, bool>, std::_Select1st<std::pair<dice::anim::RagDoll* const, bool> >, std::less<dice::anim::RagDoll*>, std::allocator<std::pair<dice::anim::RagDoll* const, bool> > >;
