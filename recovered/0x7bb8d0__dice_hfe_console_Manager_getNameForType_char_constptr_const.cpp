// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7bb8d0
#include <string>
#include <map>

namespace dice { namespace hfe {
class NoCaseStringCompare {
public:
    bool operator()(std::string const&, std::string const&) const;
};
namespace console {
class Manager {
public:
    char const* getNameForType(char const*) const;
    char m_prefix[0x18];
    std::map<std::string, char const*, NoCaseStringCompare> m_map;
};
}}}

typedef std::map<std::string, char const*, dice::hfe::NoCaseStringCompare> NameMap;

char const* dice::hfe::console::Manager::getNameForType(char const* p) const {
    NameMap::const_iterator it;
    {
        std::string key(p);
        it = m_map.find(key);
    }
    char const* r = 0;
    if (it != m_map.end())
        r = it->second;
    return r;
}
