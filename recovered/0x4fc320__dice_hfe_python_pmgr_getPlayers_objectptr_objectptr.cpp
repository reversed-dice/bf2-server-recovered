// FUNCTION: BF2 0x4fc320
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
namespace dice { namespace hfe {
namespace world {
class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual int getId();
};
class IPlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual std::list<IPlayer*>& getPlayers();
};
extern IPlayerManager* playerManager;
}
namespace python {

PyObject* pmgr_getPlayers(PyObject* self, PyObject* args)
{
    std::list<world::IPlayer*>& players = world::playerManager->getPlayers();
    PyObject* t = PyTuple_New(players.size());
    if (t) {
        int i = 0;
        for (std::list<world::IPlayer*>::iterator it = players.begin(); it != players.end(); ++it, ++i)
            PyTuple_SetItem(t, i, PyInt_FromLong((*it)->getId()));
    }
    return t;
}

} } }
