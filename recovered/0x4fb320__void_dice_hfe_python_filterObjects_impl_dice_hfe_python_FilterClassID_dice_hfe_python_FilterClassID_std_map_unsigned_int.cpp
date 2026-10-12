// FUNCTION: BF2 0x4fb320
// BF2_FLAGS: -fno-strict-aliasing
// family filterObjects_impl<FilterClassID>
#include <map>
#include <deque>
#include <string>
#include <utility>

namespace dice { namespace hfe { namespace world {

class ITemplate {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual unsigned int getClassID();
};

class IObject {
public:
    virtual void v0();
    char _pad[0x20];
    ITemplate* m_template;
};

} } }

namespace dice { namespace hfe { namespace python {

typedef int FilterClassID;

template<class T> void filterObjects_impl(T filter,
    std::map<unsigned int, dice::hfe::world::IObject*> const& objects,
    std::deque<dice::hfe::world::IObject*>& out);

template<> void filterObjects_impl<FilterClassID>(FilterClassID filter,
    std::map<unsigned int, dice::hfe::world::IObject*> const& objects,
    std::deque<dice::hfe::world::IObject*>& out)
{
    for (std::map<unsigned int, dice::hfe::world::IObject*>::const_iterator it = objects.begin(); it != objects.end(); ++it) {
        if (it->second->m_template->getClassID() == filter) {
            out.push_back(it->second);
        }
    }
}

} } }
