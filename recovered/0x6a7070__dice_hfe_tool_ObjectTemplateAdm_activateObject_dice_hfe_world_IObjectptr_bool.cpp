// FUNCTION: BF2 0x6a7070
namespace dice { namespace hfe {
namespace world {

class IObject {
public:
    char _pad[0x28];
    void* m_template; // +0x28
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
    virtual void v35();
    virtual void* getActiveObject();
    virtual void setActiveObject(void* obj);

};

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
    virtual void v20();
    virtual void setActiveTemplate(void* tmpl);

};

extern ObjectManager* objectManager;
extern ObjectTemplateManager* objectTemplateManager;

}

namespace tool {

class ObjectTemplateAdm {
public:
    bool activateObject(world::IObject* obj, bool toggle);
};

bool ObjectTemplateAdm::activateObject(world::IObject* obj, bool toggle) {
    if (obj && !obj->m_template) {
        return false;
    }
    if (toggle) {
        if (world::objectManager->getActiveObject() && obj == world::objectManager->getActiveObject()) {
            world::objectManager->setActiveObject(0);
            return true;
        }
    }
    world::objectManager->setActiveObject(obj);
    if (obj) {
        world::objectTemplateManager->setActiveTemplate(obj->m_template);
    }
    return true;
}

} } }
