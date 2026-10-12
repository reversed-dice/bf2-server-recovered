// FUNCTION: BF2 0x4fb490
// BF2_FLAGS: -fno-strict-aliasing
// family filterObjects_impl<FilterTemplateName>
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

} } }

namespace dice { namespace hfe { namespace python {

struct FilterTemplateName {
    FilterTemplateName(std::string const& n) : name(dice::hfe::getLowerCase(n)) {}
    bool operator()(dice::hfe::world::IObject* o) const;
    std::string name;
};

template<class T> void filterObjects_impl(T filter,
    std::map<unsigned int, dice::hfe::world::IObject*> const& objects,
    std::deque<dice::hfe::world::IObject*>& out);

template<> void filterObjects_impl<FilterTemplateName>(FilterTemplateName filter,
    std::map<unsigned int, dice::hfe::world::IObject*> const& objects,
    std::deque<dice::hfe::world::IObject*>& out)
{
    for (std::map<unsigned int, dice::hfe::world::IObject*>::const_iterator it = objects.begin(); it != objects.end(); ++it) {
        if (dice::hfe::getLowerCase(it->second->m_template->getName()) == filter.name) {
            out.push_back(it->second);
        }
    }
}

} } }
