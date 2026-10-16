#include <list>
#include <set>

struct _typeobject;
typedef struct _object {
    int ob_refcnt;
    struct _typeobject* ob_type;
} PyObject;
typedef void (*destructor)(PyObject*);
typedef struct _typeobject {
    int ob_refcnt;
    struct _typeobject* ob_type;
    int ob_size;
    const char* tp_name;
    int tp_basicsize, tp_itemsize;
    destructor tp_dealloc;
} PyTypeObject;
#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))

namespace dice { namespace hfe { namespace python {
class PyRef {
public:
    PyRef(PyObject* p = 0) : m_p(p) { if (m_p) Py_INCREF(m_p); }
    PyRef(const PyRef& o) : m_p(o.m_p) { if (m_p) Py_INCREF(m_p); }
    ~PyRef() { if (m_p) { Py_DECREF(m_p); } }
    bool operator<(const PyRef& o) const { return m_p < o.m_p; }
    PyObject* get() const { return m_p; }
    PyObject* m_p;
};
} } }

// FUNCTION: BF2 0x505a40
// BF2_FLAGS: -fno-strict-aliasing
void* fn_0x505a40(void* listThis, void* node)
{
    void* next = *(void**)node;
    ((std::_List_node_base*)node)->unhook();
    dice::hfe::python::PyRef* e = (dice::hfe::python::PyRef*)((char*)node + 0x10);
    e->~PyRef();
    operator delete(node);
    return next;
}
