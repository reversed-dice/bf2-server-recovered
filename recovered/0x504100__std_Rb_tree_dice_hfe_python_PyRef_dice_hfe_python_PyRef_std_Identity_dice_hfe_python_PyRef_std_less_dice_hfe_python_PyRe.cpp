// FUNCTION: BF2 0x504100
// std::_Rb_tree<dice::hfe::python::PyRef, dice::hfe::python::PyRef, std::_Identity<dice::hfe::python::PyRef>, std::less<dice::hfe::python::PyRef>, std::allocator<dice::hfe::python::PyRef> >

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

struct PyTypeObject { char pad[0x28]; void (*tp_dealloc)(void*); };

struct PyObject { int ob_refcnt; PyTypeObject* ob_type; };

namespace dice { namespace hfe { namespace python {

class PyRef
{
public:
    PyObject* m_p;
    PyRef(PyObject* p = 0) : m_p(p) {}
    PyRef(const PyRef& o) : m_p(o.m_p) { if (m_p) { ++m_p->ob_refcnt; } }
    ~PyRef()
    {
        if (m_p) {
            if (--m_p->ob_refcnt == 0) {
                m_p->ob_type->tp_dealloc(m_p);
            }
        }
    }
    bool operator<(const PyRef& o) const { return m_p < o.m_p; }
    PyObject* get() const { return m_p; }
};

} } }

template class std::_Rb_tree<dice::hfe::python::PyRef, dice::hfe::python::PyRef, std::_Identity<dice::hfe::python::PyRef>, std::less<dice::hfe::python::PyRef>, std::allocator<dice::hfe::python::PyRef> >;
