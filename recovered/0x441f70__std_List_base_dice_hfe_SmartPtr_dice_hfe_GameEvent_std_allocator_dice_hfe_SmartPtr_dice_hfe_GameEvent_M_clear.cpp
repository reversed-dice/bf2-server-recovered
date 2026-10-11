// FUNCTION: BF2 0x441f70

extern "C" void _ZdlPv(void*);

namespace dice {
namespace hfe {
class GameEvent {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void release();
};

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
class allocator {
};

template <class T, class Alloc>
class _List_base {
public:
    struct _List_node {
        _List_node* _M_next;
        _List_node* _M_prev;
        T _M_data;
    };

    _List_node _M_node;

    void _M_clear();
};

template <class T, class Alloc>
void _List_base<T, Alloc>::_M_clear()
{
    _List_node* __cur = _M_node._M_next;
    while (__cur != &_M_node)
    {
        _List_node* __tmp = __cur;
        __cur = __cur->_M_next;
        __tmp->_M_data.~T();
        _ZdlPv(__tmp);
    }
}

template class _List_base<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >;

}
