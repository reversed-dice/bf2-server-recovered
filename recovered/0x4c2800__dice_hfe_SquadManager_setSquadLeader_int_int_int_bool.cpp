// FUNCTION: BF2 0x4c2800
// BF2_FLAGS: -fno-strict-aliasing -fno-tree-ter
#include <map>
#include <new>

namespace dice { namespace hfe {

extern "C" void* func_0x00407508(unsigned long n);   // operator new
extern "C" void  func_0x00439b10(void* self);        // GameEvent::GameEvent()
extern "C" void* func_0x004c0df0(void* self, int a, int b);
extern "C" void  func_0x004c15c0(void* self, int id);
extern "C" void  func_0x0042c170(void* self, int cat, unsigned int id, bool b, void* data, unsigned int size, float delay);

namespace world {
class IPlayer;
class IPlayerManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
#undef V
    virtual IPlayer* getPlayer(int id);          // +0x40
};
extern IPlayerManager* playerManager;

class Squad {
public:
    char _pad0[0x14];
    int m_leader;                                // +0x14
    char _pad1[0x150 - 0x18];
    std::map<int, int> m_players;                // +0x150
    void setSquadLeader(int id);
};
}

enum EventCategory { EC_UNKNOWN, EC_1, EC_2, EC_3 };

class GameEvent {
public:
    virtual ~GameEvent();
};

class SetSquadLeaderEvent : public GameEvent {
public:
    char _pad8[8];
    unsigned char m_10;
    unsigned char m_11;
    unsigned char m_12;
};

class PostRemoteEvent : public GameEvent {
public:
    PostRemoteEvent(EventCategory cat, unsigned int id, bool b, void* data, unsigned int size, float delay);
    char _pad[0x50];
};

class IGame {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30) V(31) V(32) V(33) V(34) V(35) V(36)
#undef V
    virtual void sendEvent(GameEvent* e);                       // +0x128
    virtual void sendEventTo(int target, GameEvent* e);         // +0x130
};
extern IGame* game;

class IEventManager {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4)
#undef V
    virtual void sendEvent(int target, int type, void* data, float delay);   // +0x28
};
extern IEventManager* eventManager;

class IGameLogic {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49) V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57) V(58) V(59) V(60) V(61) V(62) V(63) V(64) V(65) V(66) V(67) V(68) V(69) V(70) V(71) V(72) V(73) V(74) V(75) V(76) V(77) V(78)
#undef V
    virtual bool isServer();                                    // +0x278
};
extern IGameLogic* gameLogic;

namespace ai {
class IAI {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6)
#undef V
    virtual bool isActive();                                    // +0x38
};
class AIInstanceServer { public: static IAI* m_iAI; };
class ICourier {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30) V(31) V(32) V(33)
#undef V
    virtual void sendEvent(int a, int b);                       // +0x110
};
class BFSingletonServer { public: static ICourier* m_iaiEventCourier; };
}

struct _typeobject;
typedef struct _object { int ob_refcnt; struct _typeobject* ob_type; } PyObject;
typedef void (*destructor)(PyObject*);
typedef struct _typeobject {
    int ob_refcnt;
    struct _typeobject* ob_type;
    int ob_size;
    const char* tp_name;
    int tp_basicsize, tp_itemsize;
    destructor tp_dealloc;
} PyTypeObject;
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))

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
template <class A, class B, class C> PyRef buildArgs(const A& a, const B& b, const C& c);
class PythonHost {
public:
    void handleEvent(int event, _object* args);
};
}
python::PythonHost* pythonHost();

typedef void (*Fn128)(void*, void*);
typedef void (*Fn130)(void*, int, void*);

int func_0x004c2800(void* self, int a1, int a2, int a3, bool a4)
{
    world::Squad* squad = (world::Squad*)func_0x004c0df0(self, a1, a2);
    if (squad == 0)
        return 0;

    if (!a4 && game != 0) {
        Fn128 send = (Fn128)(*(void***)game)[0x128 / 8];
        SetSquadLeaderEvent* ev = (SetSquadLeaderEvent*)func_0x00407508(0x18);
        int v3 = a3;
        int v2 = a2;
        func_0x00439b10(ev);
        ev->m_10 = (unsigned char)a1;
        ev->m_12 = (unsigned char)v2;
        ev->m_11 = (unsigned char)v3;
        *(void**)ev = (void*)0xb2e070;
        send(game, ev);
    }

    world::IPlayer* p1 = world::playerManager->getPlayer(squad->m_leader);
    world::IPlayer* p2 = world::playerManager->getPlayer(a3);
    func_0x004c15c0(squad, a3);

    if (gameLogic->isServer()) {
        std::map<int, int>& m = squad->m_players;
        std::map<int, int>::const_iterator it = m.begin();
        std::map<int, int>::const_iterator end = m.end();
        while (it != end) {
            if (it->first == 0xff) {
                eventManager->sendEvent(2, 0x18, &a3, 0.0f);
            } else {
                Fn130 sendTo = (Fn130)(*(void***)game)[0x130 / 8];
                void* pev = func_0x00407508(0x58);
                func_0x0042c170(pev, 2, 0x18, false, &a3, 4, 0.0f);
                sendTo(game, it->first, pev);
            }
            ++it;
        }
    }

    pythonHost()->handleEvent(0xd, python::buildArgs(a2, p1, p2).get());

    if (ai::AIInstanceServer::m_iAI != 0 && ai::AIInstanceServer::m_iAI->isActive()) {
        ai::BFSingletonServer::m_iaiEventCourier->sendEvent(a1, a2);
        return 1;
    }
    return 1;
}

} }
