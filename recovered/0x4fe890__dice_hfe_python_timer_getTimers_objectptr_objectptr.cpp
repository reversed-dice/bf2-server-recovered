// FUNCTION: BF2 0x4fe890
#include <list>
#include <set>
#include <string>
struct _typeobject;
typedef struct _object {
    int ob_refcnt;
    struct _typeobject* ob_type;
} PyObject;
typedef struct {
    int ob_refcnt;
    struct _typeobject* ob_type;
    int ob_size;
    PyObject* ob_item[1];
} PyTupleObject;
extern "C" {
PyObject* PyTuple_New(int size);
int PyTuple_SetItem(PyObject* p, int pos, PyObject* o);
PyObject* PyInt_FromLong(long v);
extern PyObject _Py_NoneStruct;
}
#define Py_None (&_Py_NoneStruct)
#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define PyTuple_SET_ITEM(op, i, v) (((PyTupleObject*)(op))->ob_item[i] = v)
namespace dice { namespace hfe { namespace python {

namespace {
struct HostData {
    char _pad[0x38];
    std::set<PyObject*> timers;
};
HostData* hostData;
}

PyObject* timer_getTimers(PyObject* self, PyObject* args)
{
    PyObject* t = PyTuple_New(hostData->timers.size());
    if (t) {
        int i = 0;
        for (std::set<PyObject*>::iterator it = hostData->timers.begin(); it != hostData->timers.end(); ++it) {
            Py_INCREF(*it);
            PyTuple_SET_ITEM(t, i, *it);
        }
    }
    return t;
}

} } }
