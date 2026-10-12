// FUNCTION: BF2 0x4cb580
// BF2_FLAGS: -fcrossjumping
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world {

struct VehicleCategory { int m_value; };

inline bool operator<(VehicleCategory const& a, VehicleCategory const& b) { return a.m_value < b.m_value; }

} } }

template class std::_Rb_tree<dice::hfe::world::VehicleCategory, std::pair<dice::hfe::world::VehicleCategory const, float>, std::_Select1st<std::pair<dice::hfe::world::VehicleCategory const, float> >, std::less<dice::hfe::world::VehicleCategory>, std::allocator<std::pair<dice::hfe::world::VehicleCategory const, float> > >;
