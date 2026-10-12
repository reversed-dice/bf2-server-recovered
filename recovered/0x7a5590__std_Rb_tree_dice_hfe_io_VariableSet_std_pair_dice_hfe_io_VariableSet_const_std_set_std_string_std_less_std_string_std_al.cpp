// FUNCTION: BF2 0x7a5590
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <memory>
#include <algorithm>

namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace io {
struct VariableSet { int m_value; };
inline bool operator<(VariableSet const& a, VariableSet const& b) { return a.m_value < b.m_value; }
}
} }

template class std::_Rb_tree<dice::hfe::io::VariableSet, std::pair<dice::hfe::io::VariableSet const, std::set<std::string> >, std::_Select1st<std::pair<dice::hfe::io::VariableSet const, std::set<std::string> > >, std::less<dice::hfe::io::VariableSet>, std::allocator<std::pair<dice::hfe::io::VariableSet const, std::set<std::string> > > >;
