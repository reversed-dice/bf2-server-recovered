// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x52e890
#include <map>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;

class ITemplate { public: virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void release(); };
class Base1 { public: virtual void f1(); char _pad[0x128]; };
class Base2 { public: virtual void f2(); };

class SimpleObject { public: virtual ~SimpleObject(); char _pad[0xf8]; };

struct RefPtr { ITemplate* p; void* q; ~RefPtr() { if (p) p->release(); } };
struct Pod { int _x; };
struct PodHolder { Pod* p; ~PodHolder() { if (p) delete p; } };

class ObjectSpawner : public SimpleObject, public Base1, public Base2 {
public:
    char _pad0[0x240 - 0x238];
    RefPtr m_240[3];                                // 0x240
    char _pad1[0x280 - 0x270];
    PodHolder m_280;                                // 0x280
    char _pad2[0x2a0 - 0x288];
    PodHolder m_2a0;                                // 0x2a0
    char _pad3[0x2c8 - 0x2a8];
    std::map<unsigned int, IObjectTemplate const*> m_2c8;  // 0x2c8
    virtual ~ObjectSpawner();
};

ObjectSpawner::~ObjectSpawner()
{
}
} } }
