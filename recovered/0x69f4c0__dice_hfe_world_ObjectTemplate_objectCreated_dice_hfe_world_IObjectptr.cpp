// FUNCTION: BF2 0x69f4c0
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
    T* get() const { return m_ptr; }
};

namespace world {

extern unsigned int IID_IObjectTemplateComponent;

class IObject;
class IObjectTemplate;

class IObjectComponent : public IBase {
public:
    virtual unsigned int getInterfaceID() const;
    virtual void init(IObject*);
    virtual void destroy();
    virtual void setObject(IObject*);
    virtual IObject* getObject() const;
};

class IObjectTemplateComponent : public IBase {
public:
    virtual void getClassID() const;
    virtual void getInterfaceID();
    virtual IObjectComponent* createComponent();
    virtual void objectCreated(IObject*);
    virtual void objectDestroyed(IObject*);
};

class IObjectTemplate {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual void _m21();
    virtual void setComponent(unsigned int, IBase*);
    virtual void queryComponent(unsigned int);
    virtual void getComponentFromClassID(unsigned int) const;
    virtual void objectCreated(IObject*);
};

class ObjectTemplate : public IObjectTemplate {
public:
    virtual void objectCreated(IObject* obj);

    char _pad[0x30 - sizeof(IObjectTemplate)];
    std::map<unsigned int, SmartPtr<IObjectTemplateComponent> > m_components;
};

class IObjectWithComp {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual void _m21();
    virtual void setComponent(unsigned int, IBase*); // slot 22 = 0xb0
};

void ObjectTemplate::objectCreated(IObject* obj)
{
    typedef std::map<unsigned int, SmartPtr<IObjectTemplateComponent> >::iterator Iter;
    for (Iter it = m_components.begin(); it != m_components.end(); ++it) {
        IObjectTemplateComponent* comp = (IObjectTemplateComponent*)it->second.m_ptr->queryInterface(IID_IObjectTemplateComponent);
        if (comp) {
            comp->objectCreated(obj);
            IObjectComponent* c = comp->createComponent();
            if (c) {
                ((IObjectWithComp*)obj)->setComponent(c->getInterfaceID(), c);
                c->release();
            }
        }
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_objectCreated_dice_hfe_world_IObjectptr (0x69f4c0)
