// FUNCTION: BF2 0x69f990
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
};

template <typename T>
class SmartPtr {
public:
    T* m_ptr;
    void reset() { if (m_ptr) { m_ptr->release(); m_ptr = 0; } }
    ~SmartPtr() { if (m_ptr) m_ptr->release(); }
};

namespace world {

extern unsigned int IID_IObjectTemplateComponent;

class IObject;

class IObjectTemplateComponent : public IBase {
public:
    virtual void getClassID() const;
    virtual void getInterfaceID();
    virtual void createComponent();
    virtual void objectCreated(void*);
    virtual void objectDestroyed(void*);
    virtual void setTemplate(void*);
};

class IObjectTemplate {
public:
    virtual ~IObjectTemplate();
    void* _a;
    void* _b;
    void* _c;
    void* _d;
    void* _e;
};

class ObjectTemplate : public IObjectTemplate {
public:
    std::map<unsigned int, SmartPtr<IObjectTemplateComponent> > m_components;

    void setComponent(unsigned int id, IBase* comp);
};

void ObjectTemplate::setComponent(unsigned int id, IBase* comp)
{
    if (!comp) {
        m_components.erase(id);
        return;
    }
    IObjectTemplateComponent* c = (IObjectTemplateComponent*)comp->queryInterface(IID_IObjectTemplateComponent);
    c->setTemplate(this);
    SmartPtr<IObjectTemplateComponent>& slot = m_components[id];
    slot.reset();
    slot.m_ptr = c;
    comp->addRef();
}

} } }
