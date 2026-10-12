// FUNCTION: BF2 0x4ef6e0
#include <list>
#include <string>

namespace dice { namespace hfe { namespace {

struct ConfigValue {
    int type;
    int pad0;
    std::string str;
};

bool operator<(ConfigValue const& a, ConfigValue const& b);
bool operator==(ConfigValue const& a, ConfigValue const& b);

}

template class std::list<ConfigValue, std::allocator<ConfigValue> >;

} }
