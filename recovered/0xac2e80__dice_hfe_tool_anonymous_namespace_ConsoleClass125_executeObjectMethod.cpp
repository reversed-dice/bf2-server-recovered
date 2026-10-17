// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xac2e80
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
};

namespace world {

class IObjectTemplate {};
class IObject {};

class ObjectTemplateManager {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void* getActiveTemplate();

};

extern ObjectTemplateManager* objectTemplateManager;

}

namespace tool {

class ObjectTemplateAdm {
public:
    world::IObject* createObject(world::IObjectTemplate const* tmpl);
    world::IObject* createObject(world::IObjectTemplate const* tmpl, Vec3 const& pos);
    world::IObject* createObject(world::IObjectTemplate const* tmpl, Vec3 const& pos, Vec3 const& rot);
};

extern ObjectTemplateAdm objectTemplateAdm;

namespace {

class ConsoleClass125 {
public:
    virtual void v0();
    virtual world::IObject** executeObjectMethod();

    char _pad[0x28];
    int m_argc; // 0x30
    world::IObjectTemplate** m_tmpl; // 0x38
    Vec3* m_pos; // 0x40
    Vec3* m_rot; // 0x48
    char _pad2[0x108 - 0x50];
    bool m_flag; // 0x108
    char _pad3[7];
    world::IObject* m_ret; // 0x110
};

world::IObject** ConsoleClass125::executeObjectMethod() {
    if (m_argc == 0) {
        m_flag = true;
        m_ret = objectTemplateAdm.createObject((world::IObjectTemplate*)world::objectTemplateManager->getActiveTemplate());
        return &m_ret;
    }
    else if (m_argc == 1) {
        world::IObjectTemplate* tmpl = *m_tmpl;
        m_flag = true;
        m_ret = objectTemplateAdm.createObject(tmpl);
        return &m_ret;
    }
    else if (m_argc == 2) {
        world::IObjectTemplate* tmpl = *m_tmpl;
        Vec3 pos = *m_pos;
        m_flag = true;
        m_ret = objectTemplateAdm.createObject(tmpl, pos);
        return &m_ret;
    }
    else if (m_argc == 3) {
        world::IObjectTemplate* tmpl = *m_tmpl;
        Vec3 pos = *m_pos;
        Vec3 rot = *m_rot;
        m_flag = true;
        m_ret = objectTemplateAdm.createObject(tmpl, pos, rot);
        return &m_ret;
    }
    return 0;
}

} } } }
