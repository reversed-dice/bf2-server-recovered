// FUNCTION: BF2 0x7a5540
#include <map>
#include <set>
#include <string>
#include <functional>
#include <utility>

namespace dice {
namespace hfe {
namespace io {

struct VariableSet {
    int m_value;
};

inline bool operator<(VariableSet const& a, VariableSet const& b) {
    return a.m_value < b.m_value;
}

}
}
}

typedef std::set<std::string, std::less<std::string>, std::allocator<std::string> > StrSet;

template class std::_Rb_tree<dice::hfe::io::VariableSet, std::pair<dice::hfe::io::VariableSet const, StrSet>, std::_Select1st<std::pair<dice::hfe::io::VariableSet const, StrSet> >, std::less<dice::hfe::io::VariableSet>, std::allocator<std::pair<dice::hfe::io::VariableSet const, StrSet> > >;
