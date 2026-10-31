// FUNCTION: BF2 0x53c210
#include <string>
#include <map>

namespace dice { namespace anim {
struct AnimSystemTemplateManager { virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void release(void*); };
}
}
extern dice::anim::AnimSystemTemplateManager* animationSystemTemplateManager;

struct Pod { int _p; };
struct PodHolder { Pod* p; ~PodHolder() { if (p) delete p; } };

struct Base0 { virtual ~Base0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); char _pad[0x28]; };
struct Base4 { virtual void f4(); };

class Klass_53c210 : public Base0, public Base1, public Base2, public Base3, public Base4 {
public:
    char _padStart[0x8];
    std::string m_208;                 // 0x208
    char _pad0[0x250 - 0x210];
    void* m_250;                       // 0x250
    char _pad1[0x2f8 - 0x258];
    std::string m_2f8;                 // 0x2f8
    char _pad2[0x318 - 0x300];
    PodHolder m_318;                   // 0x318
    char _pad3[0x368 - 0x320];
    std::string m_368;                 // 0x368
    std::map<int, int> m_370;          // 0x370
    virtual ~Klass_53c210();
};

Klass_53c210::~Klass_53c210()
{
    if (m_250)
        animationSystemTemplateManager->release(m_250);
}
