// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ab520
#include <string>
#include <map>

extern "C" void* fn_407468(void*);

namespace dice { namespace hfe {
namespace world {
class IObjectTemplate {};
class IObject {
public:
    char _pad[0x28];
    IObjectTemplate const* m_template; // +0x28
};

class ObjectManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void* getObjects();

};

extern ObjectManager* objectManager;
}

namespace tool {

class ObjectTemplateAdm {
public:
    std::string getObjectInfo(world::IObject const* obj);
    std::string listObjectsOfTemplate(world::IObjectTemplate const* tmpl);
};

std::string ObjectTemplateAdm::listObjectsOfTemplate(world::IObjectTemplate const* tmpl) {
    std::string res;
    typedef std::map<unsigned int, world::IObject*> ObjMap;
    char* base = (char*)world::objectManager->getObjects();
    char* end = base + 0x8;
    char* it = *(char**)(base + 0x18);
    while (it != end) {
        world::IObject* obj = *(world::IObject**)(it + 0x28);
        if (obj->m_template == tmpl) {
            std::string info = getObjectInfo(obj);
            std::string line = info;
            line.append("\n", 1);
            res.append(line);
        }
        it = (char*)fn_407468(it);
    }
    return res;
}

} } }
