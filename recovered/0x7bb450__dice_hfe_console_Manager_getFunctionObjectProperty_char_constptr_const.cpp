// FUNCTION: BF2 0x7bb450
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};
namespace console {
class Object;
typedef std::map<std::string, Object*, NoCaseStringCompare> ObjectPropertyMap;
class Manager {
public:
    Object* getFunctionObjectProperty(char const* name) const;
private:
    char _pad[0x48];
    ObjectPropertyMap m_map;
};
Object* Manager::getFunctionObjectProperty(char const* name) const {
    ObjectPropertyMap::const_iterator it;
    {
        std::string key(name);
        it = m_map.find(key);
    }
    if (it != m_map.end())
        return it->second;
    return 0;
}
} } }
