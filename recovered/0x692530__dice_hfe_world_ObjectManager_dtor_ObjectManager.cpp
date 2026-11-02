// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x692530
#include <map>
#include <list>
#include <vector>
#include <string>

extern "C" void abort() __attribute__((noreturn));
extern "C" void padcall();
extern "C" void pad0(int* p) { if (p[0] == 0) padcall(); }
extern "C" void pad1(int* p) { if (p[1] == 0) padcall(); }
extern "C" void pad2(int* p) { if (p[2] == 0) padcall(); }
extern "C" void pad3(int* p) { if (p[3] == 0) padcall(); }


namespace dice { namespace hfe { namespace world {

class IObject {
public:
    int m_refCount;
};

struct RefCounted {
    int m_refs;
    void release() { if (--m_refs == 0) delete this; }
};

class Iface {
public:
    virtual ~Iface();
    virtual int v10();
    virtual int v18();
    virtual int v20();
    virtual int v28();
    virtual int v30();
};

class ObjectCache {
public:
    void deleteAll();
    ~ObjectCache() { deleteAll(); }
    std::map<unsigned int, std::map<unsigned int, IObject*> > m_objects;
};

template<class T> class Ptr {
public:
    T* m_p;
    Ptr() : m_p(0) {}
    ~Ptr() { if (m_p) { delete m_p; } }
};

class ObjRef {
public:
    RefCounted* m_p;
    ObjRef() : m_p(0) {}
    ~ObjRef() { if (m_p != 0) { m_p->release(); } }
};

struct FadeEntry {
    float a, b, c, d;
    ~FadeEntry() {}
};

struct MsgNode {
    MsgNode* m_next;
    std::string m_text;
};

struct MsgTable {
    MsgNode** m_buckets;
    unsigned int m_count;
    char _pad[4];
    MsgTable() : m_buckets(0), m_count(0) {}
    ~MsgTable() {
        for (unsigned int i = 0; i < m_count; ++i) {
            MsgNode* n = m_buckets[i];
            while (n != 0) {
                MsgNode* next = n->m_next;
                delete n;
                n = next;
            }
            m_buckets[i] = 0;
        }

        delete[] m_buckets;
    }
};

class ObjectManager {
public:
    class Message {
    public:
        ~Message();
        IObject* m_target;
        std::string m_text;
        float m_time;
    };

    virtual ~ObjectManager();

    char _pad08[0x8];
    Iface* m_10;
    char _pad18[0x8];
    Iface* m_20;
    Iface* m_28;
    Iface* m_30;
    Iface* m_38;
    char _pad40[0x8];
    MsgTable m_table48;
    char _pad58[0x10];
    Ptr<IObject> m_68;
    char _pad70[0x18];
    std::map<unsigned int, IObject*> m_map88;
    std::map<unsigned int, IObject*> m_mapb8;
    std::vector<FadeEntry> m_e8;
    char _pad100[0x8];
    Ptr<IObject> m_108;
    char _pad110[0x10];
    Ptr<IObject> m_120;
    char _pad128[0x10];
    std::vector<ObjRef> m_138;
    char _pad150[0x8];
    std::map<unsigned int, IObject*> m_map158;
    std::map<unsigned int, IObject*> m_map188;
    char _pad1b8[0x8];
    std::vector<void*> m_arr1c0[2];
    char _pad1f0[0x8];
    Ptr<IObject> m_1f8;
    char _pad200[0x10];
    std::map<unsigned int, IObject*> m_map210;
    char _pad240[0x10];
    std::list<Message> m_msgs;
    Ptr<IObject> m_260;
    char _pad268[0x10];
    Ptr<IObject> m_278;
    char _pad280[0x28];
    ObjectCache* m_cache;
};

ObjectManager::~ObjectManager()
{
    if (m_map158.size() != 0) abort();
    if (m_10->v30() != 0) abort();
    if (m_28->v30() != 0) abort();
    if (m_30->v30() != 0) abort();
    if (m_38->v30() != 0) abort();

    delete m_cache;

    if (m_20 != 0 && m_20->v10() != 0) abort();
    if (m_10 != 0 && m_10->v10() != 0) abort();
    if (m_28 != 0 && m_28->v10() != 0) abort();
    if (m_30 != 0 && m_30->v10() != 0) abort();
    if (m_38 != 0 && m_38->v10() != 0) abort();
}

} } }
