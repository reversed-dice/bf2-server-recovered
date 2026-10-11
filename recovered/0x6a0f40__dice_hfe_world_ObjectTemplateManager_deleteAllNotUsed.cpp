// FUNCTION: BF2 0x6a0f40
#include <list>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
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
    virtual unsigned int getFlags(); // slot 0x90 (slot 18)
};

class ObjectTemplateManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void removeTemplate(IObjectTemplate* tmpl); // slot 0x88 (slot 17)
    virtual void deleteAllNotUsed();

    char _pad[0x88 - 0x8];
    std::list<IObjectTemplate*> m_templates;
};

void ObjectTemplateManager::deleteAllNotUsed() {
    std::list<IObjectTemplate*>::iterator it = m_templates.begin();
    while (it != m_templates.end()) {
        std::list<IObjectTemplate*>::iterator next = it;
        ++next;
        IObjectTemplate* tmpl = *it;
        if ((tmpl->getFlags() & 0x20) == 0) {
            removeTemplate(tmpl);
        }
        it = next;
    }
}
} } }
