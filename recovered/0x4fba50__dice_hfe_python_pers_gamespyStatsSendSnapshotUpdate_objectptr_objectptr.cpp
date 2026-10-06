// FUNCTION: BF2 0x4fba50
#include <list>
#include <vector>
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
namespace dice { namespace hfe {
namespace world { class IObject; }
class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
class IGameSpyStats {
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
    virtual void sendSnapshotUpdate(const std::string& s);
    virtual void sendSnapshotFinal(const std::string& s);
};
class IGameServer : public IBase {
public:
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual IGameSpyStats* getGameSpyStats();
};
class IGameLogic {
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
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void getControlPointsInGroup(std::vector<world::IObject*>& out, int group);
};
extern IBase* game;
extern IGameLogic* gameLogic;
extern const unsigned int IID_IGameServer;
namespace python {

struct RadiusTrigger {
    PyRef callback;
    PyRef data;
    int id;
};

struct HostData {
    bool m_initialized;
    bool m_shuttingDown;
    char _pad[0x26];
    std::list<PyRef> gameStatusHandlers;
    std::set<PyRef> timers;
    char _pad2[0x30];
    std::list<RadiusTrigger> triggers;
    std::list<RadiusTrigger>::iterator nextTrigger;
};
HostData& pyHostData();
int py_arg(PyObject* args, int i, std::string& out);
int py_arg(PyObject* args, int i, int& out);
int py_argo(PyObject* args, int i, world::IObject*& out);
PyObject* to_py(world::IPlayer* p);
PyObject* wrapObject(world::IObject* o);

PyObject* trig_destroyAll(PyObject* self, PyObject* args)
{
    pyHostData().triggers.clear();
    pyHostData().nextTrigger = pyHostData().triggers.begin();
    Py_RETURN_NONE;
}

PyObject* object_pco_getPlayers(PyObject* self, PyObject* args)
{
    PyObject* t = 0;
    world::IObject* o = 0;
    if (py_argo(args, 0, o) == 0) {
        std::list<world::IPlayer*> players;
        getAllPlayers(o, players);
        t = PyTuple_New(players.size());
        if (t) {
            int i = 0;
            for (std::list<world::IPlayer*>::iterator it = players.begin(); it != players.end(); ++it, ++i)
                PyTuple_SetItem(t, i, to_py(*it));
        }
    }
    return t;
}

PyObject* pers_gamespyStatsSendSnapshotUpdate(PyObject* self, PyObject* args)
{
    std::string snapshot;
    py_arg(args, 0, snapshot);
    IGameServer* gs = 0;
    if (game)
        gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    gs->getGameSpyStats()->sendSnapshotUpdate(snapshot);
    Py_RETURN_NONE;
}

PyObject* pers_gamespyStatsSendSnapshotFinal(PyObject* self, PyObject* args)
{
    IGameServer* gs = 0;
    if (game)
        gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    std::string snapshot;
    py_arg(args, 0, snapshot);
    gs->getGameSpyStats()->sendSnapshotFinal(snapshot);
    Py_RETURN_NONE;
}

PyObject* sgl_getControlPointsInGroup(PyObject* self, PyObject* args)
{
    PyObject* t = 0;
    int group;
    if (py_arg(args, 0, group) == 0) {
        std::vector<world::IObject*> cps;
        gameLogic->getControlPointsInGroup(cps, group);
        t = PyTuple_New(cps.size());
        if (t) {
            int i = 0;
            for (std::vector<world::IObject*>::iterator it = cps.begin(); it != cps.end(); ++it, ++i)
                PyTuple_SET_ITEM(t, i, wrapObject(*it));
        }
    }
    return t;
}

} } }
