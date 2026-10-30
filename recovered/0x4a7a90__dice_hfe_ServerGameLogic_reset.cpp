// FUNCTION: BF2 0x4a7a90
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

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

void* operator new(unsigned long);

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

class IGameServer {
public:
    virtual void s0();  virtual void s1();  virtual void s2();  virtual void s3();
    virtual void s4();  virtual void s5();  virtual void s6();  virtual void s7();
    virtual void s8();  virtual void s9();  virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
    virtual void s16(); virtual void s17(); virtual void s18();
    virtual void s19();
};

class IGame {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void* queryInterface(unsigned int iid);
    virtual void g4();  virtual void g5();  virtual void g6();  virtual void g7();
    virtual void g8();  virtual void g9();  virtual void g10(); virtual void g11();
    virtual void g12(); virtual void g13(); virtual void g14(); virtual void g15();
    virtual void g16(); virtual void g17(); virtual void g18(); virtual void g19();
    virtual void g20(); virtual void g21(); virtual void g22(); virtual void g23();
    virtual void g24(); virtual void g25(); virtual void g26(); virtual void g27();
    virtual void g28(); virtual void g29(); virtual void g30(); virtual void g31();
    virtual void g32();
    virtual void addEvent(GameEvent* e);
};
extern IGame* game;

class IScoreManager {
public:
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
};

class NetworkManager {
public:
    void regressNetworkableIds();
    int getHighestUsedNetID();
};

namespace world {
class ArtilleryManager {
public:
    static ArtilleryManager* m_instance;
    void reset();
};
class CommanderToolsManager {
public:
    static CommanderToolsManager* m_instance;
    void reset();
};
class UAVVehicleManager {
public:
    static UAVVehicleManager* m_instance;
    void reset();
};
extern IScoreManager* scoreManager;
}

extern NetworkManager* networkManager;
extern unsigned int IID_IGameServer;

enum GameStatus { GS0, GS1, GS2, GS3 };

void GameLogic_reset(void* self);

struct ServerGameLogic {
    char _pad0[0x490];
    char m490;
    char m491;
    char m492;
    char _pad493[0x4b8 - 0x493];
    float m4b8;
    float m4bc;
    float m4c0;
    float m4c4;
    char m4c8;
    char m4c9;
    char _pad4ca[2];
    float m4cc;
    float m4d0;
    float m4d4;
    int m4d8;
    int m4dc;
    char m4e0;
    char m4e1;
    char _pad4e2[6];
    std::map<int, int> m_mapA;
    std::map<int, int> m_mapB;
    int m548;
    int m54c;
    void setGameStatus(GameStatus s, bool b, float f);
    void reset();
};

void ServerGameLogic::reset()
{
    m4cc = 10.0f;
    m4d0 = 10.0f;
    m4d8 = 50;
    m4dc = 50;
    m4e0 = 0;
    m4e1 = 0;
    m4c0 = 0;
    m4c4 = 0;
    m4b8 = 0;
    m4bc = 0;
    m_mapA.clear();
    m_mapB.clear();
    m548 = m4d8;
    m54c = m4dc;
    float d1 = 0;
    game->addEvent(new PostRemoteEvent(EC0, 6, true, 0, 0, d1));
    float d2 = 0;
    setGameStatus(GS3, false, d2);
    GameLogic_reset(this);
    if (world::ArtilleryManager::m_instance)
        world::ArtilleryManager::m_instance->reset();
    if (world::CommanderToolsManager::m_instance)
        world::CommanderToolsManager::m_instance->reset();
    if (world::UAVVehicleManager::m_instance)
        world::UAVVehicleManager::m_instance->reset();
    pythonHost()->handleEvent(0, python::buildArgs<int>(0).get());
    networkManager->regressNetworkableIds();
    int netId = networkManager->getHighestUsedNetID();
    game->addEvent(new PostRemoteEvent((EventCategory)6, 5, false, &netId, 4, 0.0f));
    IGameServer* gs = (IGameServer*)game->queryInterface(IID_IGameServer);
    if (gs != 0)
        gs->s19();
    m490 = 1;
    m491 = 1;
    m492 = 1;
    m4c9 = 0;
    m4c8 = 0;
    world::scoreManager->m20();
}

} }
