// FUNCTION: BF2 0x4fe3c0
// libstdc++ 4.0 instantiations over dice::hfe::WeakPtr as the recovered corpus
// defines it (refcounted handle, copy/assign/release inline).
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <iterator>
namespace dice { namespace hfe {
template <class T> struct WeakPtrHandle {
    void release() { if (--refs == 0) delete this; }
    int refs;
    T* obj;
};
template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    WeakPtr(const WeakPtr& o) : m_h(o.m_h) { if (m_h) ++m_h->refs; }
    WeakPtr& operator=(const WeakPtr& o)
    {
        if (o.m_h)
            ++o.m_h->refs;
        if (m_h)
            m_h->release();
        m_h = o.m_h;
        return *this;
    }
    ~WeakPtr() { if (m_h) m_h->release(); }
    T* get() const { return m_h ? m_h->obj : 0; }
    bool operator<(const WeakPtr& o) const { return m_h < o.m_h; }
    bool operator==(const WeakPtr& o) const { return m_h == o.m_h; }
    WeakPtrHandle<T>* m_h;
};
namespace world { class IObject; class IPlayer; class ICollisionMesh; }
class Player { public: struct ItemStatus { int a; int b; }; };
} }
typedef dice::hfe::WeakPtr<dice::hfe::world::IObject> WO;
typedef dice::hfe::WeakPtr<dice::hfe::world::IPlayer> WP;
typedef dice::hfe::WeakPtr<dice::hfe::world::ICollisionMesh> WC;
template class std::vector<WO>;
template class std::vector<WP>;
template class std::vector<WC>;
template class std::list<WO>;
template class std::list<WP>;
template class std::set<WO>;
template class std::map<WO, dice::hfe::Player::ItemStatus>;
template std::back_insert_iterator<std::list<WO> > std::set_difference(std::_List_iterator<WO>, std::_List_iterator<WO>, std::_Rb_tree_const_iterator<WO>, std::_Rb_tree_const_iterator<WO>, std::back_insert_iterator<std::list<WO> >);
template std::back_insert_iterator<std::list<WO> > std::set_symmetric_difference(std::_Rb_tree_const_iterator<WO>, std::_Rb_tree_const_iterator<WO>, std::_Rb_tree_const_iterator<WO>, std::_Rb_tree_const_iterator<WO>, std::back_insert_iterator<std::list<WO> >);
