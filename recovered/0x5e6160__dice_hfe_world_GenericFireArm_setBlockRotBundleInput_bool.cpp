// FUNCTION: BF2 0x5e6160
#include <cstddef>
#include <string>
#include <vector>
#include <ostream>

namespace dice { namespace hfe {

extern char DAT_00bb25f1;

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

int compareIgnoreCase(std::string const& a, std::string const& b);

namespace world {

class IObject;
class ObjectPredicator;

const IObject* getRootParent(const IObject* obj);
void getChilds(IObject* obj, std::vector<IObject*>& out, ObjectPredicator* acceptor,
               ObjectPredicator* rejector);

class INamed {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual std::string const& getName();
};

class IObject {
public:
    char _pad0[0x28];
    INamed* m_named;
    char _pad1[0x2a0 - 0x30];
    void* m_field2a0;
};

class WeakRef {
public:
    void* pad0;
    IObject* obj;
};

class GenericFireArmTemplate {
public:
    char _pad[0x290];
    std::string m_name;
};

class GenericFireArm {
public:
    char _pad0[0x288];
    IObject* m_object;
    char _pad1[0x328 - 0x290];
    WeakRef* m_weak;
    GenericFireArmTemplate* m_template;
    void setBlockRotBundleInput(bool b);
};

void GenericFireArm::setBlockRotBundleInput(bool b)
{
    if (m_object == 0) {
        std::vector<IObject*> objs;
        getChilds((IObject*)getRootParent((IObject*)this), objs, 0, 0);
        for (std::vector<IObject*>::iterator it = objs.begin(); it != objs.end(); ++it) {
            IObject* child = *it;
            if (compareIgnoreCase(child->m_named->getName(), m_template->m_name) == 0) {
                m_object = child;
                break;
            }
        }
        if (m_object == 0) {
            IObject* root = (IObject*)getRootParent((IObject*)this);
            std::string const& rootName = root->m_named->getName();
            Debug(6, std::string("Game/Objects/Weapons/GenericFireArm.cpp"), 0x624,
                  std::string(&DAT_00bb25f1))
                    .os
                << "Template " << m_template->m_name << " not found in object hierarchy."
                << " RootObject:" << rootName;
        }
    }
    IObject* obj = m_object;
    if (obj == 0)
        return;
    obj->m_field2a0 = (b && m_weak != 0) ? m_weak->obj : 0;
}

} }

}
