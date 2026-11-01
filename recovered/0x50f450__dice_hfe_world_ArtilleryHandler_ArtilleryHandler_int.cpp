// FUNCTION: BF2 0x50f450
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>
#include <ostream>
#include <new>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
};

namespace world {

class RefCounted {
public:
    int m_refs;
    void addRef() { ++m_refs; }
    void release() { if (--m_refs == 0) delete this; }
};

class WeakPtr {
public:
    RefCounted* m_h;
    WeakPtr() : m_h(0) {}
    WeakPtr(WeakPtr const& o) : m_h(o.m_h) { if (m_h) m_h->addRef(); }
    ~WeakPtr() { if (m_h) m_h->release(); }
    WeakPtr& operator=(WeakPtr const& o) {
        if (o.m_h) o.m_h->addRef();
        if (m_h) m_h->release();
        m_h = o.m_h;
        return *this;
    }
};

class TargetObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual WeakPtr getRef();
    virtual void init();
};

struct ArtilleryObjectStruct {
    unsigned long long m_a;
    unsigned long long m_b;
    unsigned long long m_c;
    unsigned char m_d;
};

struct Debug_50f050 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_50f050(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_50f050();
};

extern void TargetObject_setTargetActive_55f9b0(void* self, bool active, bool force);

class ArtilleryHandler {
public:
    ArtilleryHandler(int team);
    virtual void v0();
    void findArtilleryPieces();

    std::list<ArtilleryObjectStruct> m_pieces;  // +0x08
    int m_team;                                 // +0x18
    int m_pad1;                                 // +0x1c
    WeakPtr m_20;                               // +0x20
    int m_28;                                   // +0x28
    float m_2c;                                 // +0x2c
    float m_30;                                 // +0x30
    int m_34;                                   // +0x34
    unsigned char m_38;                         // +0x38
    char m_pad2[3];
    float m_3c;                                 // +0x3c
    int m_40;                                   // +0x40
    unsigned char m_44;                         // +0x44
};

ArtilleryHandler::ArtilleryHandler(int team)
    : m_team(team), m_28(0), m_2c(0.0f), m_30(0.0f), m_34(0), m_38(0), m_3c(2.0f), m_40(60), m_44(0)
{
    findArtilleryPieces();

    typedef void* (*FnGetTemplate)(void*, std::string const&);
    void* tmpl = ((FnGetTemplate)(*(void***)*(void**)0x0112ee40)[0x48 / 8])(
        *(void**)0x0112ee40, std::string("UniqueTarget"));

    if (!tmpl) return;

    TargetObject* obj;
    if (*(int*)((char*)tmpl + 0x1f4) == 3) {
        obj = (TargetObject*)((void* (*)(void*))(*(void***)tmpl)[0xa8 / 8])(tmpl);
        if (obj) obj->init();
    } else {
        std::string const& s =
            ((std::string const& (*)(void*))(*(void***)tmpl)[0x128 / 8])(tmpl);
        if (s.empty()) {
            Debug_50f050(6, std::string("Game/Objects/Game/ArtilleryHandler.cpp"), 0xbd,
                         std::string(&DAT_00bb25f1))
                    .os
                << "Target object must be networkable.";
        }
        typedef void* (*FnCreate)(void*, void*, const Vec3&, const Vec3&, bool, int, int);
        void* g = *(void**)0x010c5420;
        obj = (TargetObject*)((FnCreate)(*(void***)g)[0xf0 / 8])(g, tmpl, Vec3(), Vec3(), 1, 0, 0);
    }

    m_20 = obj->getRef();
    TargetObject_setTargetActive_55f9b0(obj, false, true);
}

} }
}
