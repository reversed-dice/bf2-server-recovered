// FUNCTION: BF2 0x4a72b0
// BF2_FLAGS: -fno-strict-aliasing
struct _typeobject;
typedef struct _object { int ob_refcnt; struct _typeobject* ob_type; } PyObject;
typedef void (*destructor)(PyObject*);
typedef struct _typeobject {
    int ob_refcnt; struct _typeobject* ob_type; int ob_size;
    const char* tp_name; int tp_basicsize, tp_itemsize; destructor tp_dealloc;
} PyTypeObject;
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))

namespace dice { namespace hfe {

namespace world {
class IObject;
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
    virtual IObject* getVehicle() const;
    virtual void v19();
    virtual void v20();
    virtual int getId() const;
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
    virtual IObject* getDefaultVehicle();
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
    virtual void setTeam(int team, bool force);
    virtual int getTeam() const;
};
}

namespace python {
class PyRef {
public:
    PyObject* m_p;
    PyRef(PyObject* p = 0) : m_p(p) {}
    PyRef(const PyRef& o) : m_p(o.m_p) {}
    ~PyRef() { if (m_p) { Py_DECREF(m_p); } }
    PyObject* get() const { return m_p; }
};
template <class T, class U> PyRef buildArgs(const T& a, const U& b);
class PythonHost {
public:
    void handleEvent(int event, _object* args);
};
}
python::PythonHost* pythonHost();

class GameEvent {
public:
    virtual ~GameEvent();
};

enum EventCategory { EC0, EC1, EC2, EC3 };

class PostRemoteEvent : public GameEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, int b, void* data, unsigned int size, float delay);
    char _pad[0x50];
};

class IGame {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual void g27();
    virtual void g28();
    virtual void g29();
    virtual void g30();
    virtual void g31();
    virtual void g32();
    virtual void g33();
    virtual void notify(int id, PostRemoteEvent* ev);
};
extern IGame* game;

class ServerGameLogic {
public:
    int selectTeam(world::IPlayer* player, int team);
    char _pad[0x588];
    bool m_588;
};

int ServerGameLogic::selectTeam(world::IPlayer* player, int team)
{
    if (!player)
        return 0;
    player->setTeam(team, false);
    pythonHost()->handleEvent(7, python::buildArgs(player, m_588).get());
    if (player->getTeam() != team) {
        int data[2];
        data[0] = player->getId();
        data[1] = -1;
        game->notify(player->getId(), new PostRemoteEvent(EC0, 8, player->getId(), data, 8, 0.0f));
    }
    return 1;
}

} }
