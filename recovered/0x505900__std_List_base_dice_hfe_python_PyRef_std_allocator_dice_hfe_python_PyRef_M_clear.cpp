// FUNCTION: BF2 0x505900
// BF2_FLAGS: -fno-strict-aliasing

extern "C" void _ZdlPv(void*);

struct PyTypeObject {
    char pad[0x28];
    void (*tp_dealloc)(void*);
};

struct PyObject {
    int ob_refcnt;
    PyTypeObject* ob_type;
};

namespace dice {
namespace hfe {
namespace python {

class PyRef {
public:
    PyObject* m_p;
    ~PyRef() {
        if (m_p) {
            if (--m_p->ob_refcnt == 0) {
                m_p->ob_type->tp_dealloc(m_p);
            }
        }
    }
};

}
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

template class _List_base<dice::hfe::python::PyRef, std::allocator<dice::hfe::python::PyRef> >;

}
