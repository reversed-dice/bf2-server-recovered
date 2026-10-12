// FUNCTION: BF2 0x6a07b0
// BF2_FLAGS: -fno-strict-aliasing
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
    virtual void addRef();
    virtual void _v1();
    virtual void release();
};

} } }

namespace dice { namespace hfe {

template <typename T>
class SmartPtr {
public:
    T* m_ptr;
    SmartPtr() : m_ptr(0) {}
    SmartPtr(T* p) : m_ptr(p) { if (m_ptr) m_ptr->addRef(); }
    SmartPtr(SmartPtr const& o) : m_ptr(o.m_ptr) { if (m_ptr) m_ptr->addRef(); }
    ~SmartPtr() { if (m_ptr) m_ptr->release(); }
    T* operator->() const { return m_ptr; }
};

} }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > > >;
