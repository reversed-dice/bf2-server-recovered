// FUNCTION: BF2 0x4fb5b0
// BF2_FLAGS: -fno-strict-aliasing
// wrapper filterObjects<FilterTemplateName>
#include <map>
#include <deque>
#include <string>
#include <utility>

namespace dice { namespace hfe {
std::string getLowerCase(std::string const& s);

namespace world {

class ITemplate {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual void t4();
    virtual void t5();
    virtual void t6();
    virtual void t7();
    virtual void t8();
    virtual void t9();
    virtual void t10();
    virtual std::string const& getName();
};

class IObject {
public:
    virtual void v0();
    char _pad[0x20];
    ITemplate* m_template;
};

class ObjectManager {
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
    virtual std::map<unsigned int, IObject*> const& getBundles();
};

extern ObjectManager* objectManager;

} }
}

namespace dice { namespace hfe { namespace python {

struct FilterTemplateName {
    FilterTemplateName(std::string const& n) : name(dice::hfe::getLowerCase(n)) {}
    bool operator()(dice::hfe::world::IObject* o) const;
    std::string name;
};

template<class T> void filterObjects_impl(T filter,
    std::map<unsigned int, dice::hfe::world::IObject*> const& objects,
    std::deque<dice::hfe::world::IObject*>& out);

template<class T> void filterObjects(T filter, std::deque<dice::hfe::world::IObject*>& out);

template<> void filterObjects<FilterTemplateName>(FilterTemplateName filter,
    std::deque<dice::hfe::world::IObject*>& out)
{
    const std::map<unsigned int, dice::hfe::world::IObject*>& objects = dice::hfe::world::objectManager->getBundles();
    filterObjects_impl<FilterTemplateName>(filter, objects, out);
}

} } }
