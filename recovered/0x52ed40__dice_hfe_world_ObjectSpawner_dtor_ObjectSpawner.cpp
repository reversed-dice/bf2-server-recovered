// FUNCTION: BF2 0x52ed40
#include <map>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;

class SimpleObject {
public:
    virtual ~SimpleObject();
    char _pad[0xf8];
};

class B1 {
public:
    ~B1() {}
    char _pad[0x130];
};

class IObjectSpawner {
public:
    ~IObjectSpawner() {}
    char _pad[8];
};

class Obj {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void vfn28();
};

struct Slot {
    Obj* p;
    char _pad[8];
    ~Slot() { if (p) p->vfn28(); }
};

struct Deleter {
    void* p;
    ~Deleter() { if (p) ::operator delete(p); }
};

class ObjectSpawner : public SimpleObject, public B1, public IObjectSpawner {
public:
    char _pad_0x238[8];
    Slot m_slots[3];
    char _pad_0x270[0x10];
    Deleter m_280;
    char _pad_0x288[0x18];
    Deleter m_2a0;
    char _pad_0x2a8[0x20];
    std::map<unsigned int, IObjectTemplate const*> m_templates;
    ~ObjectSpawner();
};

ObjectSpawner::~ObjectSpawner() {
    *(void**)((char*)this + 0x100) = (void*)0xb48110;
    *(void**)((char*)this + 0x230) = (void*)0xb48148;
}

} } }
