// FUNCTION: BF2 0x68b240
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice { namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

namespace world {

class IObject;

typedef void (*Fn_1f0)(void*, void*);
typedef void (*Fn_1f8)(void*);
typedef void (*Fn_c0)(void*, unsigned int, unsigned int);
typedef void (*Fn_200)(void*, void*);

extern void* mObjectManager;

void setBoundRadiusIsDirty(IObject* o);
namespace { void transformationWasUpdated(IObject* o); }
void* getIdentity();

struct Mat4 {
    float m[16];
    Mat4() {
        float* p = m;
        long i = 3;
        do {
            --i;
            p[0] = 0.0f;
            p[1] = 0.0f;
            p[2] = 0.0f;
            p[3] = 0.0f;
            p += 4;
        } while (i != -1);
        m[15] = 1.0f;
        m[10] = 1.0f;
        m[5] = 1.0f;
        m[0] = 1.0f;
    }
};

class Object {
public:
    void setParent(IObject* parent);
private:
    char _pad0[0x8];
    unsigned int m_flags;
    char _pad1[0x10 - 0xc];
    void* m_10;
    char _pad2[0x50 - 0x18];
    IObject* m_50;
    void* m_58;
    char _pad3[0x158 - 0x60];
    Mat4* m_158;
};

void Object::setParent(IObject* parent)
{
    IObject* old = m_50;
    if (old == parent)
        return;
    bool hasParent = (parent != 0);
    if (parent != 0 && old != 0)
        ((Fn_1f0)(*(void***)old)[0x1f0 / 8])(old, this);
    m_50 = parent;
    m_58 = 0;
    if (parent == 0) {
        if ((void*)m_158 == getIdentity())
            Debug(DebugType(7), "Scene/Object/Object.cpp", 0x486, "") << "Should not free &identyTrans";
        delete m_158;
        m_158 = (Mat4*)getIdentity();
        m_flags |= 0x1000000;
    } else {
        m_158 = new Mat4();
        m_flags &= 0xfeffffff;
    }
    ((Fn_1f8)(*(void***)this)[0x1f8 / 8])(this);
    m_10 = 0;
    if (parent == 0)
        ((Fn_c0)(*(void***)this)[0xc0 / 8])(this, 0x8000, 0x10);
    transformationWasUpdated((IObject*)this);
    if (!hasParent) {
        if ((m_flags & 0x400) != 0)
            ((Fn_200)(*(void***)mObjectManager)[0x200 / 8])(mObjectManager, this);
    }
    setBoundRadiusIsDirty((IObject*)this);
}

} } }
