// FUNCTION: BF2 0x738740
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>
namespace dice { namespace hfe {

class ConsoleObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11)
#undef V
    virtual bool isAvailable();
};

class ConsoleObjects {
public:
    ConsoleObject* findInMultiMap(const std::string& name) const;
    char _pad0[0x18];
    std::multimap<std::string, ConsoleObject*> m_objects;
};

ConsoleObject* ConsoleObjects::findInMultiMap(const std::string& name) const
{
    std::multimap<std::string, ConsoleObject*>::const_iterator it = m_objects.lower_bound(name);
    std::multimap<std::string, ConsoleObject*>::const_iterator end = m_objects.upper_bound(name);
    for (; it != end; ++it) {
        ConsoleObject* o = it->second;
        if (o->isAvailable())
            return o;
    }
    return 0;
}

} }
