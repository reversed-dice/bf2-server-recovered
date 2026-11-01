// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x7bb960
#include <map>
#include <vector>
#include <string>
#include <strings.h>

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual ~ConsoleObject();
};

namespace console {

class Object;

struct NoCaseCharPtrCompare {
    bool operator()(char const* a, char const* b) const {
        if (a != 0 && b != 0)
            return strcasecmp(a, b) < 0;
        return a < b;
    }
};

class Object {
public:
    virtual ~Object();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual unsigned int getFlags();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    char const* getName() const { return m_objectName; }
    char const* m_functionName;   // +0x8
    char const* m_objectName;     // +0x10
    unsigned int m_id;            // +0x18
};

class Manager {
public:
    void addObjectToObjectVecMap(Object* object);

    std::vector<void*> m_infos;   // +0x0
    char _pad18[0x60];            // +0x18
    std::map<char const*, std::vector<Object*>, NoCaseCharPtrCompare> m_objectVecMap;  // +0x78
};

void Manager::addObjectToObjectVecMap(Object* object)
{
    char const* name = object->getName();
    std::map<char const*, std::vector<Object*>, NoCaseCharPtrCompare>::iterator it =
        m_objectVecMap.find(name);
    if (it != m_objectVecMap.end()) {
        it->second.push_back(object);
        return;
    }
    m_objectVecMap[name].push_back(object);
}

} } }
