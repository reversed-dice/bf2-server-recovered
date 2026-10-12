// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ed780
#include <string>
namespace dice { namespace hfe { namespace {

struct ConfigValue { int type; int pad0; std::string str; };

bool operator<(const ConfigValue& a, const ConfigValue& b) {
    return a.str < b.str;
}

} } }
