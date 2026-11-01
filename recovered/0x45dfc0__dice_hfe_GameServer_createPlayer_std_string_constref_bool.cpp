// FUNCTION: BF2 0x45dfc0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <ostream>

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
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObject*)(op))

namespace dice { namespace hfe {

enum DebugType { DEBUG_ERROR = 1 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

class GameEvent {
public:
    GameEvent();
    virtual void addRef();
    virtual int getRef() const;
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~GameEvent();
    virtual unsigned int getType() const;
    virtual void logInfo(bool, int);
    virtual void eventReceivedByRemote(void*);
    virtual void executeClient();
    virtual void executeServer(int);
    virtual void deSerialize(void*);
    virtual void serialize(void*);
protected:
    int m_refCount;
    int m_field;
};

class VoipSessionEvent : public GameEvent {
public:
    VoipSessionEvent(unsigned short id) : m_sessionId(id) {}
    static const unsigned int TYPE;
    virtual unsigned int getType() const { return TYPE; }
    unsigned short m_sessionId;
};

namespace world { class IPlayer; }

class CreatePlayerEvent {
public:
    CreatePlayerEvent(world::IPlayer* player, bool isAI);
    char m_pad[0x40];
};

class VoipServerConnection {
public:
    static VoipServerConnection* GetInstance();
    int CreateClientSessionId(int playerId);
};

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
template <class T> PyRef buildArgs(T const& a);
class PythonHost {
public:
    void handleEvent(int event, _object* args);
};
}
python::PythonHost* pythonHost();

namespace ai {
class IAI;
class AIInstanceServer {
public:
    static IAI* m_iAI;
};
}

namespace world {
class IPlayer;
class PlayerManager;
extern PlayerManager* playerManager;
}

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void dispatch(unsigned int, unsigned int, const void*, float);
};
extern EventManager* eventManager;

class GameServer {
public:
    world::IPlayer* createPlayerWithValidName(const std::string& name, int id);
    int createPlayer(const std::string& name, bool isAI);
};

int GameServer::createPlayer(const std::string& name, bool isAI)
{
    int playerId = 0xff;
    if (isAI) {
        if (ai::AIInstanceServer::m_iAI == 0) {
            Debug(DebugType(1), std::string("Game/GameServer/GameServer.cpp"), 0xdda, std::string("")).stream()
                << "Failed to create ai player, AI not enabled.";
            return -1;
        }
        playerId = 0xff - ((int (*)(void*))(*(void***)world::playerManager)[0x110 / 8])(world::playerManager);
        while (((world::IPlayer* (*)(void*, int))(*(void***)world::playerManager)[0x40 / 8])(world::playerManager, playerId) != 0) {
            --playerId;
        }
    }
    world::IPlayer* player = createPlayerWithValidName(name, playerId);
    if (player == 0) {
        return -1;
    }
    ((void (*)(void*, int))(*(void***)player)[0xc0 / 8])(player, isAI);
    ((void (*)(void*, int))(*(void***)player)[0xb0 / 8])(player, isAI);
    ((void (*)(void*, unsigned int, unsigned int, const void*, float))(*(void***)eventManager)[0x28 / 8])(eventManager, 1, 4, player, 0.0f);
    typedef void (*SendCreateFn)(void*, void*);
    SendCreateFn sendCreate = *(SendCreateFn*)(*(char**)this + 0x128);
    CreatePlayerEvent* ev = new CreatePlayerEvent(player, true);
    sendCreate(this, ev);
    if (!isAI) {
        ((void (*)(void*, int))(*(void***)world::playerManager)[0x70 / 8])(world::playerManager, playerId);
        ((void (*)(void*, int))(*(void***)player)[0xf8 / 8])(player, 1);
    }
    pythonHost()->handleEvent(0xe, python::buildArgs<world::IPlayer*>(player).get());
    unsigned short sessionId = ((int (*)(void*))(*(void***)player)[0x4e0 / 8])(player);
    if (sessionId == 0) {
        sessionId = VoipServerConnection::GetInstance()->CreateClientSessionId(
            ((int (*)(void*))(*(void***)player)[0xa8 / 8])(player));
    }
    ((void (*)(void*, int))(*(void***)player)[0x4e8 / 8])(player, sessionId);
    ((void (*)(void*, int, void*))(*(void***)this)[0x120 / 8])(this,
        ((int (*)(void*))(*(void***)player)[0xa8 / 8])(player), new VoipSessionEvent(sessionId));
    return ((int (*)(void*))(*(void***)player)[0xa8 / 8])(player);
}

} }
