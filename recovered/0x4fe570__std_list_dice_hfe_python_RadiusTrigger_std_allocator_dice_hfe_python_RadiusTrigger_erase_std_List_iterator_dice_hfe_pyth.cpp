// FUNCTION: BF2 0x4fe570
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <set>
#include <string>

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

namespace dice { namespace hfe { namespace world { class IObject; } } }

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
    ~WeakPtr() { if (m_h) m_h->release(); }
    T* get() const { return m_h ? m_h->obj : 0; }
    bool operator<(const WeakPtr& o) const { return m_h < o.m_h; }
    WeakPtrHandle<T>* m_h;
};
} }

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

struct RadiusTrigger {
    int id;
    float radius;
    float unk08, unk0c;
    WeakPtr<world::IObject> object;
    float unk18, unk1c;
    PyRef callback;
    PyRef data;
    std::set<WeakPtr<world::IObject> > objects;
    bool operator<(const RadiusTrigger& o) const { return id < o.id; }
    bool operator==(const RadiusTrigger& o) const { return id == o.id; }
};
} } }

template class std::list<dice::hfe::python::RadiusTrigger, std::allocator<dice::hfe::python::RadiusTrigger> >;
