// FUNCTION: BF2 0x782560
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::ai::IWeapon*, std::allocator<dice::hfe::ai::IWeapon*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace ai { struct IWeapon; } } }

template class std::vector<dice::hfe::ai::IWeapon*, std::allocator<dice::hfe::ai::IWeapon*> >;
