// FUNCTION: BF2 0x7a56e0
// BF2_FLAGS: -fcrossjumping
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace io {

struct VariableSet { int m_value; };

inline bool operator<(VariableSet const& a, VariableSet const& b) { return a.m_value < b.m_value; }

} } }

template class std::_Rb_tree<dice::hfe::io::VariableSet, std::pair<dice::hfe::io::VariableSet const, std::set<std::string, std::less<std::string>, std::allocator<std::string> > >, std::_Select1st<std::pair<dice::hfe::io::VariableSet const, std::set<std::string, std::less<std::string>, std::allocator<std::string> > > >, std::less<dice::hfe::io::VariableSet>, std::allocator<std::pair<dice::hfe::io::VariableSet const, std::set<std::string, std::less<std::string>, std::allocator<std::string> > > > >;
