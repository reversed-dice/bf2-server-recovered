// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x504820
// void std::__uninitialized_fill_n_aux<std::vector<std::pair<dice::hfe::python::PyRef, bool>, std::allocator<std

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

namespace dice { namespace hfe { namespace python {
struct PyObject { int ob_refcnt; };
class PyRef {
public:
    PyObject* m_p;
    PyRef() : m_p(0) {}
    PyRef(PyRef const& o) { m_p = o.m_p; if (m_p) { ++m_p->ob_refcnt; } }
};
} } }

template void std::__uninitialized_fill_n_aux<std::vector<std::pair<dice::hfe::python::PyRef, bool>, std::allocator<std::pair<dice::hfe::python::PyRef, bool> > >*, unsigned long, std::vector<std::pair<dice::hfe::python::PyRef, bool>, std::allocator<std::pair<dice::hfe::python::PyRef, bool> > > >(std::vector<std::pair<dice::hfe::python::PyRef, bool>, std::allocator<std::pair<dice::hfe::python::PyRef, bool> > >*, unsigned long, std::vector<std::pair<dice::hfe::python::PyRef, bool>, std::allocator<std::pair<dice::hfe::python::PyRef, bool> > > const&, __false_type);
