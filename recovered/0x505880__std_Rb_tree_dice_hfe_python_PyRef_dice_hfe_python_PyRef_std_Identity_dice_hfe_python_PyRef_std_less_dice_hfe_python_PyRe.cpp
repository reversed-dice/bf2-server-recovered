// FUNCTION: BF2 0x505880
#include <set>

struct PyTypeObject { char pad[0x28]; void (*tp_dealloc)(void*); };
struct PyObject { int ob_refcnt; PyTypeObject* ob_type; };

namespace dice { namespace hfe { namespace python {

class PyRef
{
public:
    PyObject* m_p;
    PyRef(PyObject* p = 0) : m_p(p) {}
    PyRef(const PyRef& o) : m_p(o.m_p) {}
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

void rdErasePyRef(std::set<dice::hfe::python::PyRef>& s, dice::hfe::python::PyRef const& v)
{
    s.erase(v);
}

void rdErasePyRefRange(std::set<dice::hfe::python::PyRef>& s)
{
    s.erase(s.begin(), s.end());
}
