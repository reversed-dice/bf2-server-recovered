// FUNCTION: BF2 0x738db0
// BF2_FLAGS: -fcrossjumping
#include <strings.h>
#include <list>
#include <map>
#include <string>

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual ~ConsoleObject();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual int getKind();
};

class ConsoleObjects {
public:
    ConsoleObject* findInMultiMap(std::string const&) const;
    ConsoleObject* getConsoleObject(std::string const&, std::string const&) const;
};

ConsoleObject* ConsoleObjects::getConsoleObject(std::string const& name, std::string const& method) const
{
    ConsoleObject* obj = findInMultiMap(name + method);
    if (!obj && strncasecmp(method.c_str(), "get", 3) == 0) {
        std::string rest = method.substr(3, method.size() - 3);
        obj = findInMultiMap(name + rest);
        if (obj && obj->getKind() != 1 && obj->getKind() != 3)
            obj = 0;
    }
    if (!obj && strncasecmp(method.c_str(), "set", 3) == 0) {
        std::string rest = method.substr(3, method.size() - 3);
        obj = findInMultiMap(name + rest);
        if (obj && obj->getKind() != 1 && obj->getKind() != 2)
            obj = 0;
    }
    return obj;
}

} }
