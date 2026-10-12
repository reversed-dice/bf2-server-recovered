// FUNCTION: BF2 0x68c060
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

} }
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

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > > >;
