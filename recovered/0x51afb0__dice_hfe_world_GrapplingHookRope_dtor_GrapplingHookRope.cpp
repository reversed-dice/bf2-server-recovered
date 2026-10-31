// FUNCTION: BF2 0x51afb0
#include <vector>
#include <list>

namespace dice { namespace hfe { namespace world {
class ISoldier;

class RopeParticle {
public:
    char _pad[0x2c];
    ~RopeParticle();
};

struct Pod { int _p; };
struct PodHolder { Pod* p; ~PodHolder() { if (p) delete p; } };

class Base1 { public: virtual void f1(); };

class SimpleObject { public: virtual ~SimpleObject(); char _pad[0xf8]; };

class GrapplingHookRope : public SimpleObject, public Base1 {
public:
    char _pad0[0x230 - 0x108];
    std::list<ISoldier*> m_230;      // 0x230
    char _pad1[0x258 - 0x240];
    std::vector<RopeParticle> m_258; // 0x258
    PodHolder m_270;                 // 0x270
    virtual ~GrapplingHookRope();
};

GrapplingHookRope::~GrapplingHookRope()
{
}
} } }
