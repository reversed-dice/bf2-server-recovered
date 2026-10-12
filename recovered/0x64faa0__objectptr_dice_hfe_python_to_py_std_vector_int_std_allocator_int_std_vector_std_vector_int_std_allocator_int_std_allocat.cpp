// FUNCTION: BF2 0x64faa0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
struct _typeobject;
typedef struct _object {
    int ob_refcnt;
    struct _typeobject* ob_type;
} PyObject;
extern "C" {
PyObject* PyTuple_New(int size);
int PyTuple_SetItem(PyObject* p, int pos, PyObject* o);
PyObject* PyInt_FromLong(long v);
}
namespace dice { namespace hfe { namespace python {
template<class T> PyObject* to_py(std::vector<T> const& v);
template<> PyObject* to_py<std::vector<int> >(std::vector<std::vector<int> > const& v) {
    PyObject* t = PyTuple_New((int)v.size());
    unsigned int i = 0;
    for (std::vector<std::vector<int> >::const_iterator it = v.begin(); it != v.end(); ++it, ++i) {
        std::vector<int> tmp(*it);
        PyTuple_SetItem(t, i, to_py<int>(tmp));
    }
    return t;
}
} } }
