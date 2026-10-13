// FUNCTION: BF2 0x4ef610
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <string>

namespace dice { namespace hfe { namespace {

struct ConfigValue { int type; int pad0; std::string str; int gap[4]; std::string str2; };

template class std::_List_base<ConfigValue, std::allocator<ConfigValue> >;

} } }
