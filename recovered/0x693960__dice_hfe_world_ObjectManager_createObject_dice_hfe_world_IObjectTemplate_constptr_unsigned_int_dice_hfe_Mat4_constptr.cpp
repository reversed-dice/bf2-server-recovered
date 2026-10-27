// FUNCTION: BF2 0x693960
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe {

struct Vec4 {
    float x, y, z, w;
};

struct Mat4 {
    Vec4 r[4];
};

class Settings {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

extern Settings* settings;

namespace world {

class IObject;
class IObjectTemplate;
class ObjectCache;

extern unsigned int CID_OverheadCameraTemplate;
extern unsigned int CID_ZiplineTemplate;
extern unsigned int CID_GrapplingHookRopeTemplate;

class ObjectTemplate {
public:
    static bool getIsPreCaching();
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void postCreate();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void setTransform(const Mat4* m);
};

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    virtual unsigned int getClassID() const;
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual IObject* createInstance() const;
};

class ObjectCache {
public:
    IObject* popObject(const IObjectTemplate* templ, unsigned int id, const Mat4* mat);
    void markObjectAsCreatedInCache(IObject* object);
};

class ObjectManager {
public:
    char _pad[0x2a8];
    ObjectCache* m_cache;

    IObject* createObject(const IObjectTemplate* templ, unsigned int id, const Mat4* mat);
};

IObject* ObjectManager::createObject(const IObjectTemplate* templ, unsigned int id, const Mat4* mat)
{
    static bool checkObjectCacheDisabledVariable = true;
    static char objectCacheDisabled = 0;

    if (templ == 0)
        abort();

    bool cache = !ObjectTemplate::getIsPreCaching();

    if (checkObjectCacheDisabledVariable) {
        checkObjectCacheDisabledVariable = false;
        char flag = *dice::hfe::settings->getFlag(std::string("GSUseObjectCache"), (char)1);
        objectCacheDisabled = flag ? objectCacheDisabled : (char)1;
    }

    if (objectCacheDisabled)
        cache = false;

    if (templ->getClassID() == CID_OverheadCameraTemplate ||
        templ->getClassID() == CID_ZiplineTemplate ||
        templ->getClassID() == CID_GrapplingHookRopeTemplate)
        cache = false;

    IObject* object;

    if (!cache) {
    } else {
        object = m_cache->popObject(templ, id, mat);
        if (object)
            return object;
    }

    object = templ->createInstance();
    if (object) {
        if (mat)
            object->setTransform(mat);
        object->postCreate();
        if (cache)
            m_cache->markObjectAsCreatedInCache(object);
    }
    return object;
}

} } }
