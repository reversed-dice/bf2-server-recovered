// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x7bcca0
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <memory>
#include <algorithm>
#include <cstring>

namespace dice { namespace hfe {
namespace console { class Object; }
class NoCaseCharPtrCompare {
public:
    bool operator()(char const* a, char const* b) const { if (a && b) return strcasecmp(a, b) < 0; return a < b; }
};
} }

template class std::_Rb_tree<char const*, std::pair<char const* const, std::vector<dice::hfe::console::Object*> >, std::_Select1st<std::pair<char const* const, std::vector<dice::hfe::console::Object*> > >, dice::hfe::NoCaseCharPtrCompare, std::allocator<std::pair<char const* const, std::vector<dice::hfe::console::Object*> > > >;
