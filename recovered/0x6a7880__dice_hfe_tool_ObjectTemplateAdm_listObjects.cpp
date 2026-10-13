// FUNCTION: BF2 0x6a7880
// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
#include <sstream>
#include <string>
#include <map>

namespace dice { namespace hfe { namespace world {
extern void* objectManager;
} } }

namespace dice { namespace hfe { namespace tool {

struct Obj {
    char m_pad[0x28];
    void* m_next;
};

typedef std::map<std::string, Obj*> ObjMap;

class ObjectTemplateAdm {
public:
    ~ObjectTemplateAdm();
    std::string listObjects();
};

std::string ObjectTemplateAdm::listObjects() {
    std::stringstream ss;
    ObjMap* m = ((ObjMap* (*)(void*))(*(void***)dice::hfe::world::objectManager)[0x68 / 8])(dice::hfe::world::objectManager);
    ObjMap::iterator it = m->begin();
    ObjMap::iterator e = m->end();
    if (it != e) {
        do {
            if (it->second->m_next != 0)
                ss << it->second << "\n";
            ++it;
        } while (it != e);
    }
    return ss.str();
}

} } }
