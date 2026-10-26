// FUNCTION: BF2 0x4a8440
// BF2_FLAGS: -fno-strict-aliasing
#include <ostream>
#include <string>

namespace dice { namespace hfe {

namespace world { class IPlayer; class IObject; }

enum DebugType { DEBUG_WARNING = 6 };

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

struct _typeobject;
struct _object {
    int ob_refcnt;
    _typeobject* ob_type;
};
struct _typeobject {
    char m_pad0[0x28];
    void (*tp_dealloc)(_object*);
};

namespace world {

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual IPlayer* getLocalPlayer();
};
extern PlayerManager* playerManager;

}

namespace python {

class PyRef {
public:
    ~PyRef() {
        if (m_obj) {
            if (--m_obj->ob_refcnt == 0)
                m_obj->ob_type->tp_dealloc(m_obj);
        }
    }
    _object* m_obj;
};

extern PyRef fn_466570(world::IPlayer* const& a, world::IPlayer* const& b,
                       world::IObject* const& c, world::IObject* const& d,
                       world::IObject* const& e);

}

extern void* fn_4fe7c0();
extern void fn_4feb40(void* host, int ev, _object* args);

class ServerGameLogic {
public:
    void suicide();
};

void ServerGameLogic::suicide()
{
    world::IPlayer* p = world::playerManager->getLocalPlayer();
    if (!p) {
        Debug(DebugType(6), std::string("Game/GameLogic/ServerGameLogic.cpp"), 0x948, std::string("")).stream()
            << "No local player found.";
        return;
    }
    ((void (*)(void*, int))(*(void***)p)[0xe0 / 8])(p, 1);
    if (((bool (*)(void*))(*(void***)p)[0xd8 / 8])(p)) {
        fn_4feb40(fn_4fe7c0(), 1, python::fn_466570(p, p, 0, 0, 0).m_obj);
    }
    if (p)
        ((void (*)(void*, world::IPlayer*, int, int))(*(void***)this)[0xd8 / 8])(this, p, 1, 1);
}

} }
