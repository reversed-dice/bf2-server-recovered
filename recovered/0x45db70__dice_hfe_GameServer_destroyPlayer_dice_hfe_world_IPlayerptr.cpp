// FUNCTION: BF2 0x45db70
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <string>
#include <vector>
#include <stdlib.h>

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

class DestroyPlayerEvent : public GameEvent {
public:
    DestroyPlayerEvent(int id) : m_playerId((unsigned char)id) {}
    virtual unsigned int getType() const;
    unsigned char m_playerId;
};

namespace world {

class IPlayer;

class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassID() const;
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};

extern unsigned int CID_FreeCameraTemplate;

class IObject {
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
    char _pad0x8[0x20];
    ITemplate* m_template;
};

class INetworkable {
public:
    char _pad0x0[0x8];
    unsigned short m_id;
    char _pad0x12[0x6];
};

}

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

class CommonSingletonServer {
public:
    static void* m_iaiPlayerFactory;
};

class IAIPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual world::IPlayer* getPlayer();
};

}

class ISquadManager {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void leaveSquad(int, int, int, int);
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21();
    virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void removeFromSquad(int);
};

extern void* gameLogic;
extern void* game;
extern ISquadManager* squadManager;
extern void* eventManager;
extern void* playerManager;

namespace io {
class NetworkManager {
public:
    void removeNetworkable(unsigned short id);
};
extern NetworkManager* networkManager;
}

class GameServer {
public:
    virtual void v0();
    bool destroyPlayer(world::IPlayer* player);
    char _pad0[0x110];
    int m_x118;
};

typedef world::IObject* (*FnGet)(void*);
typedef int (*FnInt)(void*);
typedef bool (*FnBool)(void*);
typedef void (*FnVoidInt)(void*, int);

bool GameServer::destroyPlayer(world::IPlayer* player)
{
    if (player == 0)
        return false;

    world::IObject* obj = ((FnGet)(*(void***)player)[0x90 / 8])(player);
    if (obj != 0) {
        if (obj != ((FnGet)(*(void***)player)[0x150 / 8])(player)
            || ((FnBool)(*(void***)player)[0xd8 / 8])(player) != 0) {
            ((void (*)(void*, void*, int, int))(*(void***)gameLogic)[0xd8 / 8])(
                gameLogic, player, 1, 0);
        }
    }

    obj = ((FnGet)(*(void***)player)[0x90 / 8])(player);
    if (obj != 0) {
        if (obj != ((FnGet)(*(void***)player)[0x150 / 8])(player))
            abort();
        ((void (*)(void*, void*))(*(void***)game)[0x140 / 8])(game, obj);
        ((void (*)(void*, void*, int, int))(*(void***)game)[0x150 / 8])(game, player, 1, 1);
    }

    obj = ((FnGet)(*(void***)player)[0x90 / 8])(player);
    if (obj != 0) {
        if (obj->m_template->getClassID() != world::CID_FreeCameraTemplate)
            abort();
    }

    if (squadManager != 0) {
        if (((FnInt)(*(void***)player)[0x218 / 8])(player) != 0) {
            squadManager->leaveSquad(
                  ((FnInt)(*(void***)player)[0x1d0 / 8])(player),
                  ((FnInt)(*(void***)player)[0x218 / 8])(player),
                  ((FnInt)(*(void***)player)[0xa8 / 8])(player),
                  0);
        }
        if (((FnBool)(*(void***)player)[0x228 / 8])(player) != 0) {
            squadManager->removeFromSquad(((FnInt)(*(void***)player)[0x1d0 / 8])(player));
        }
    }

    pythonHost()->handleEvent(0xf, python::buildArgs<world::IPlayer*>(player).get());

    if (((FnGet)(*(void***)player)[0x150 / 8])(player) != 0) {
        typedef void (*FnVoid2)(void*, void*);
        FnVoid2 f = (FnVoid2)(*(void***)this)[0x140 / 8];
        f(this, ((FnGet)(*(void***)player)[0x150 / 8])(player));
    }

    ((void (*)(void*, unsigned int, unsigned int, const void*, float))(*(void***)eventManager)[0x28 / 8])(
        eventManager, 1, 2, player, 0.0f);

    if (((FnBool)(*(void***)player)[0xd8 / 8])(player) == 0)
        --m_x118;

    {
        typedef void (*FnSend)(void*, DestroyPlayerEvent*);
        FnSend send = (FnSend)(*(void***)this)[0x128 / 8];
        send(this, new DestroyPlayerEvent(((FnInt)(*(void***)player)[0xa8 / 8])(player)));
    }

    io::networkManager->removeNetworkable(
        ((world::INetworkable* (*)(void*))(*(void***)player)[0x320 / 8])(player)->m_id);

    ((void (*)(void*, void*))(*(void***)playerManager)[0x28 / 8])(playerManager, player);

    if (ai::CommonSingletonServer::m_iaiPlayerFactory != 0) {
        typedef std::vector<ai::IAIPlayer*> List;
        List list = ((List& (*)(void*))(*(void***)ai::CommonSingletonServer::m_iaiPlayerFactory)[0x58 / 8])(
            ai::CommonSingletonServer::m_iaiPlayerFactory);
        for (List::iterator it = list.begin(); it != list.end(); ++it) {
            ai::IAIPlayer* p = *it;
            if (p != 0) {
                world::IPlayer* q = p->getPlayer();
                if (q == player && ((FnBool)(*(void***)q)[0xb8 / 8])(q) != 0) {
                    ((void (*)(void*, ai::IAIPlayer*))(*(void***)ai::CommonSingletonServer::m_iaiPlayerFactory)[0x30 / 8])(
                        ai::CommonSingletonServer::m_iaiPlayerFactory, p);
                }
            }
        }
    }

    if (player != 0)
        ((void (*)(void*))(*(void***)player)[0x30 / 8])(player);
    return true;
}

} }
