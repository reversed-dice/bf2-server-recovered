// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4302a0
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

namespace dice { namespace hfe {

namespace python {
class PyRef
{
public:
    PyObject* m_p;
    PyRef(PyObject* p = 0) : m_p(p) {}
    PyRef(const PyRef& o) : m_p(o.m_p) {}
    ~PyRef() { if (m_p) { Py_DECREF(m_p); } }
    PyObject* get() const { return m_p; }
};
template <class T> PyRef buildArgs(const T& a);
class PythonHost {
public:
    void handleEvent(int event, _object* args);
};
}
python::PythonHost* pythonHost();

enum EventCategory { EC0, EC1, EC2, EC3 };

class GameEvent {
public:
    virtual ~GameEvent();
};

class PostRemoteEvent : public GameEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, bool b, void* data, unsigned int size, float delay);
    char _pad[0x50];
};

namespace world {
class IObject {
public:
    virtual void o0();
    char _pad[0x60];
    void* m_68;
};
}

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
    virtual world::IObject* getObjectById(const unsigned short& id);   // 0xf8
    virtual void g32();
    virtual void addEvent(GameEvent* e);       // 0x108
};
extern IGame* game;

class IEventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern IEventManager* eventManager;

namespace ai {
class IAI {
public:
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6();
    virtual bool isActive();   // 0x38
};
class AIInstanceServer {
public:
    static IAI* m_iAI;
};
}

struct SpottedData {
    SpottedData(void* o, unsigned char t) : obj(o), team(t) {}
    void* obj;
    unsigned char team;
};

class SpottedEvent : public GameEvent {
public:
    bool executeServer(int playerId);
    char _pad8[8];
    short m_10;
    unsigned short m_objectId;
    unsigned char m_team;
    char _pad15[0xf];
    unsigned int m_playerId;
};

bool SpottedEvent::executeServer(int playerId)
{
    pythonHost()->handleEvent(0x29, python::buildArgs<int>(playerId).get());
    if (ai::AIInstanceServer::m_iAI && ai::AIInstanceServer::m_iAI->isActive()) {
        world::IObject* obj = game->getObjectById(m_objectId);
        if (obj && obj->m_68) {
            SpottedData d(obj->m_68, m_team);
            eventManager->sendEvent(3, 0x16, &d, 0.0f);
        }
    }
    game->addEvent(new PostRemoteEvent(EC2, m_playerId, false, &m_10, 0x18, 0.0f));
    return true;
}

} }
