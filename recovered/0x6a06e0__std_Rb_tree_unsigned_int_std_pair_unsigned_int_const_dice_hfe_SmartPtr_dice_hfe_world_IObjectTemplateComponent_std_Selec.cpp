// FUNCTION: BF2 0x6a06e0

namespace dice {
namespace hfe {
namespace world {

class IObjectTemplateComponent {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void release();
};

}

template <class T>
class SmartPtr {
public:
    T* m_ptr;
    ~SmartPtr() {
        if (m_ptr)
            m_ptr->release();
    }
};

}
}

namespace std {

template <class T>
struct less {
    bool operator()(const T& x, const T& y) const { return x < y; }
};

template <class T1, class T2>
struct pair {
    T1 first;
    T2 second;
};

template <class Pair>
struct _Select1st {
    const typename Pair::first_type& operator()(const Pair& x) const { return x.first; }
};

template <class T>
class allocator {
};

template <class Key, class Val, class KeyOfValue, class Compare, class Alloc>
class _Rb_tree {
public:
    struct _Rb_tree_node {
        int _M_color;
        _Rb_tree_node* _M_parent;
        _Rb_tree_node* _M_left;
        _Rb_tree_node* _M_right;
        Val _M_value_field;
    };

    void _M_erase(_Rb_tree_node* __x);
};

template <class Key, class Val, class KeyOfValue, class Compare, class Alloc>
void _Rb_tree<Key, Val, KeyOfValue, Compare, Alloc>::_M_erase(_Rb_tree_node* __x)
{
    while (__x != 0)
    {
        _M_erase(__x->_M_right);
        _Rb_tree_node* __y = __x->_M_left;
        __x->_M_value_field.~Val();
        ::operator delete(__x);
        __x = __y;
    }
}

template class _Rb_tree<
    unsigned int,
    pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> >,
    _Select1st<pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > >,
    less<unsigned int>,
    allocator<pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > > >;

}
