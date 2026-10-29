// FUNCTION: BF2 0x689fb0
#include <map>

namespace dice { namespace hfe { namespace world {

typedef int (*Fn_58)(void*);
typedef void (*Fn_c0)(void*, unsigned int, int);
typedef void* (*Fn_1e0)(void*);
typedef void (*Fn_48)(void*);
typedef void (*Fn_v)(void*);
typedef void (*Fn_v1)(void*, int);
typedef void (*Fn_b0)(void*, unsigned int, void*);
typedef void (*Fn_1a8)(void*, int);
typedef void (*Fn_118)(void*, void*);
typedef void (*Fn_28)(void*, void*);

extern void* objectManager;
extern "C" void abort() __attribute__((noreturn));

namespace Mat4 { void* getIdentity(); }

class IObject;

class CacheRef {
public:
    IObject* m_h;
    ~CacheRef() { if (m_h != 0) ((Fn_v)(*(void***)m_h)[0x10 / 8])(m_h); }
};

class Object {
public:
    char _pad0[0x8];
    unsigned char m_8;
    char _pad1[0x10 - 0x9];
    void* m_10;
    char _pad2[0x50 - 0x18];
    void* m_50;
    char _pad3[0x80 - 0x58];
    void* m_80;
    void* m_88;
    void* m_90;
    char _pad4[0x1b0 - 0x98];
    std::map<unsigned int, CacheRef> m_map;
    char _pad5[0x20d - 0x1b0 - 0x30];
    unsigned char m_20d;
    void disableCachedObject();
};

void Object::disableCachedObject()
{
    if ((m_8 & 0x20) != 0
        || ((Fn_58)(*(void***)this)[0x58 / 8])(this) == 0)
        abort();

    ((Fn_c0)(*(void***)this)[0xc0 / 8])(this, 0x20, 0);

    IObject* child = (IObject*)((Fn_1e0)(*(void***)this)[0x1e0 / 8])(this);
    while (child != 0) {
        if (((Fn_58)(*(void***)this)[0x58 / 8])(this)
            == ((Fn_58)(*(void***)child)[0x58 / 8])(child)) {
            ((Fn_48)(*(void***)child)[0x48 / 8])(child);
            child = (IObject*)*(void**)((char*)child + 0x58);
        } else {
            IObject* next = (IObject*)*(void**)((char*)child + 0x58);
            ((Fn_28)(*(void***)objectManager)[0x28 / 8])(objectManager, child);
            child = next;
        }
    }

    while (!m_map.empty()) {
        std::map<unsigned int, CacheRef>::iterator it = m_map.begin();
        IObject* p = it->second.m_h;
        if (p != 0) {
            ((Fn_v)(*(void***)p)[0x30 / 8])(p);
            ((Fn_b0)(*(void***)this)[0xb0 / 8])(this, it->first, 0);
        } else {
            m_map.erase(it);
        }
    }

    ((Fn_1a8)(*(void***)this)[0x1a8 / 8])(this, 0);
    m_10 = 0;
    if (m_50 == 0) {
        Fn_118 fn = (Fn_118)(*(void***)this)[0x118 / 8];
        void* id = Mat4::getIdentity();
        fn(this, id);
    }
    void* c88 = m_88;
    if (c88 != 0) {
        ((Fn_v1)(*(void***)c88)[0x230 / 8])(c88, 1);
        ((Fn_v1)(*(void***)c88)[0x30 / 8])(c88, 1);
    }
    void* c90 = m_90;
    if (c90 != 0) {
        ((Fn_v)(*(void***)c90)[0x40 / 8])(c90);
        ((Fn_v1)(*(void***)c90)[0x30 / 8])(c90, 1);
    }
    void* c80 = m_80;
    if (c80 != 0) {
        ((Fn_v)(*(void***)c80)[0x30 / 8])(c80);
    }
    ((Fn_c0)(*(void***)this)[0xc0 / 8])(this, 0x40000001, 0);
    ((Fn_v)(*(void***)this)[0x170 / 8])(this);
}

} } }
