// FUNCTION: BF2 0x6b8730
// BF2_FLAGS: -fno-strict-aliasing
// std::_List_base<std::pair<float, dice::anim::Bundle::BundleEvent>, std::allocator<std::pair<float, dice::anim::Bundle::BundleEvent> > >

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

namespace dice { namespace anim { namespace Bundle { struct BundleEvent { std::string s; }; } } }

template class std::_List_base<std::pair<float, dice::anim::Bundle::BundleEvent>, std::allocator<std::pair<float, dice::anim::Bundle::BundleEvent> > >;
