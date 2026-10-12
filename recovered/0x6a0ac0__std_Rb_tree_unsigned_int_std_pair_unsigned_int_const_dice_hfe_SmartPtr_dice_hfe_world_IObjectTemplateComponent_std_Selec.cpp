// FUNCTION: BF2 0x6a0ac0
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world {

class IObjectTemplateComponent {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void release();
};

} } }

namespace dice { namespace hfe {

template <class T>
class SmartPtr {
public:
    T* m_ptr;
    ~SmartPtr() { if (m_ptr) m_ptr->release(); }
};

} }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > > >;
