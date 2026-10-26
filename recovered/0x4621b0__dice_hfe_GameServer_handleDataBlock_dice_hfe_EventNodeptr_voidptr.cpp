// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x4621b0
#include <string>
#include <vector>

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

class EventNode {
public:
    virtual ~EventNode() {}
    char m_pad[0x20];
    int m_id;             // +0x28
    int m_kind;           // +0x2c
    unsigned int m_size;  // +0x30
    char m_pad2[4];
    void* m_data;         // +0x38
};

class ClientInfo {
public:
    ClientInfo();
    void setFromDataBlock(void const* p, unsigned int n);
    std::string m_name;
    std::string m_squadName;
    int m_id;
    int m_team;
    std::string m_kit;
    bool m_ready;
    bool m_alive;
    std::vector<int> m_flags;
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
template <class T, class U> PyRef buildArgs(T const& a, U const& b);
class PythonHost {
public:
    void handleEvent(int event, _object* args);
};
}
python::PythonHost* pythonHost();

class GameServer {
public:
    void handleDataBlock(EventNode* node, void* data);
    void handleClientInfo(int id, ClientInfo* info);
};

void GameServer::handleDataBlock(EventNode* node, void* data)
{
    int id = node->m_id;
    switch (node->m_kind) {
    case 1: {
        ClientInfo info;
        info.setFromDataBlock(node->m_data, node->m_size);
        handleClientInfo(id, &info);
        break;
    }
    case 6: {
        std::string text((char const*)node->m_data, node->m_size);
        pythonHost()->handleEvent(0x26, python::buildArgs<int, std::string>(node->m_id, text).get());
        break;
    }
    }
}

} }
