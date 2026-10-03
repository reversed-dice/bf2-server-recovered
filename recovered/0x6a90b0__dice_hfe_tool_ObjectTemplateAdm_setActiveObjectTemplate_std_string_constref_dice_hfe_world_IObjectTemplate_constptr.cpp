// FUNCTION: BF2 0x6a90b0
#include <string>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3();
    virtual int getId() const;
};

class ObjectTemplateManager {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6();
    virtual const std::string& getNameFromId(int id);
    virtual void refresh();
    virtual void p9();  virtual void p10(); virtual void p11(); virtual void p12();
    virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16();
    virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20();
    virtual void setActive(const IObjectTemplate* t);
};

extern ObjectTemplateManager* objectTemplateManager;

} } }

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    void setActiveObjectTemplate(const std::string& name, const world::IObjectTemplate* t);
};

void ObjectTemplateAdm::setActiveObjectTemplate(const std::string&, const world::IObjectTemplate* t) {
    world::objectTemplateManager->refresh();
    if (t != 0) {
        std::string s = world::objectTemplateManager->getNameFromId(t->getId());
    }
    world::objectTemplateManager->setActive(t);
}

} } }
