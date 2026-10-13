// FUNCTION: BF2 0x64e120
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace world { class IPlayer; } } }

namespace dice { namespace hfe {

class HTTPRequest {
public:
    void onGetFailure(std::string const& s);
};

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual world::IPlayer* getPlayer(int id);
};

namespace world { extern PlayerManager* playerManager; }

namespace python {

struct PyObject {
    int m_refcount;   // +0x0
    int m_pad;        // +0x4
    void** m_vptr;    // +0x8
};

class PyRef {
public:
    PyObject* m_obj;
    ~PyRef() {
        if (m_obj != 0) {
            if (--m_obj->m_refcount == 0) {
                ((void (*)(PyObject*))m_obj->m_vptr[5])(m_obj);
            }
        }
    }
};

PyRef buildArgs(int const& id, world::IPlayer* const& p, std::string const& s);

}

class PythonHost {
public:
    void handleEvent(int ev, python::PyObject* obj);
};

PythonHost* pythonHost();

void playerAwardsOnGetFailure(void* self, std::string const& s) {
    ((HTTPRequest*)((char*)self + 8))->onGetFailure(s);
    if (*(char*)((char*)self + 0x80) == 0)
        return;
    PlayerManager* pm = world::playerManager;
    world::IPlayer* p = pm->getPlayer(*(int*)((char*)self + 0x84));
    python::PyRef args = python::buildArgs(0, p, s);
    pythonHost()->handleEvent(0x14, args.m_obj);
}

} }
