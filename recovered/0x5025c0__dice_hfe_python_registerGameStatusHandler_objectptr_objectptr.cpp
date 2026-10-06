// FUNCTION: BF2 0x5025c0
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
int PyCallable_Check(PyObject* o);
void PyErr_SetString(PyObject* type, const char* message);
extern PyObject* PyExc_RuntimeError;
extern PyObject _Py_NoneStruct;
}
#define Py_None (&_Py_NoneStruct)
#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define PyTuple_SET_ITEM(op, i, v) (((PyTupleObject*)(op))->ob_item[i] = v)

namespace dice { namespace hfe {
namespace world {
class IPlayer;
class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
};
extern const unsigned int IID_IPlayerControlObject;
}
namespace python {
class PyRef {
public:
    PyRef(PyObject* p = 0) : m_p(p) { if (m_p) Py_INCREF(m_p); }
    PyRef(const PyRef& o) : m_p(o.m_p) { if (m_p) Py_INCREF(m_p); }
    ~PyRef() { if (m_p) { Py_DECREF(m_p); } }
    bool operator<(const PyRef& o) const { return m_p < o.m_p; }
    PyObject* get() const { return m_p; }
    PyObject* m_p;
};
void getAllPlayers(world::IObject* o, std::list<world::IPlayer*>& out);
int py_arg(PyObject* args, int i, PyObject*& out);
} } }
namespace dice { namespace hfe { namespace python {

struct HostData {
    bool m_initialized;
    bool m_shuttingDown;
    char _pad[0x26];
    std::list<PyRef> gameStatusHandlers;
    char _pad2[0x8];
    std::set<PyRef> timers;
};
HostData& pyHostData();
namespace {
HostData* hostData;
}

class PythonHost {
public:
    virtual ~PythonHost();
    void insertTimer(PyObject* timer);
    HostData* m_data;
};

void PythonHost::insertTimer(PyObject* timer)
{
    m_data->timers.insert(PyRef(timer));
}

class PCOPredicator {
public:
    virtual bool predicate(world::IObject* o);
};

bool PCOPredicator::predicate(world::IObject* o)
{
    bool r = false;
    if (o->queryInterface(world::IID_IPlayerControlObject)) {
        std::list<world::IPlayer*> players;
        getAllPlayers(o, players);
        r = players.size() != 0;
    }
    return r;
}

PyObject* unregisterGameStatusHandler(PyObject* self, PyObject* args)
{
    if (!hostData->m_shuttingDown) {
        PyObject* handler;
        if (py_arg(args, 0, handler))
            return 0;
        if (!PyCallable_Check(handler)) {
            PyErr_SetString(PyExc_RuntimeError, "not callable");
            return 0;
        }
        HostData& d = pyHostData();
        for (std::list<PyRef>::iterator it = d.gameStatusHandlers.begin(); it != d.gameStatusHandlers.end();) {
            if (it->get() == handler)
                d.gameStatusHandlers.erase(it++);
            else
                ++it;
        }
    }
    Py_RETURN_NONE;
}


PyObject* registerGameStatusHandler(PyObject* self, PyObject* args)
{
    if (!hostData->m_shuttingDown) {
        PyObject* handler;
        if (py_arg(args, 0, handler))
            return 0;
        if (!PyCallable_Check(handler)) {
            PyErr_SetString(PyExc_RuntimeError, "not callable");
            return 0;
        }
        pyHostData().gameStatusHandlers.push_back(PyRef(handler));
    }
    Py_RETURN_NONE;
}

} } }
