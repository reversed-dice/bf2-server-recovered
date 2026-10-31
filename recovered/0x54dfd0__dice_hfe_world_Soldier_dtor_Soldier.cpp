// FUNCTION: BF2 0x54dfd0
#include <map>
#include <list>
#include <vector>

namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class IObject; class IPlayerControlObject; class ICameraObject;

class SoldierSound {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void release_at_18();   // slot 3 = 0x18
    void stopDrowningSound();
};

struct Reffed { int m_ref; };
struct RefHolder { Reffed* p; ~RefHolder() { if (p) { if (--p->m_ref == 0) delete p; } } };
struct Pod { int x; };
struct PodHolder { Pod* p; ~PodHolder() { if (p) delete p; } };
struct PodHolder24 { Pod* p; char _pad[0x10]; ~PodHolder24() { if (p) delete p; } };
struct SoundPtr { SoldierSound* p; ~SoundPtr() { if (p) p->release_at_18(); } };

class Bundle { public: virtual ~Bundle(); char _pad[0xf8]; };
class Base1 { public: virtual void f1(); char _pad[0x130]; };
class Base2 { public: virtual void f2(); };
class Base3 { public: virtual void f3(); };
class Base4 { public: virtual void f4(); };

class Soldier : public Bundle, public Base1, public Base2, public Base3, public Base4 {
public:
    char _p0[0x260 - 0x250];
    RefHolder m_260;                                   // 0x260
    std::map<int, IPlayerControlObject*> m_268;        // 0x268
    PodHolder m_298;                                   // 0x298
    char _p1[0x2b0 - 0x2a0];
    PodHolder24 m_2b0[3];                              // 0x2b0
    char _p2[0x320 - 0x2f8];
    std::map<int, ICameraObject*> m_320;               // 0x320
    char _p3[0x360 - 0x350];
    std::list<IObject*> m_360;                         // 0x360
    char _p4[0x380 - 0x370];
    PodHolder m_380;                                   // 0x380
    char _p5[0x398 - 0x388];
    RefHolder m_398;                                   // 0x398
    RefHolder m_3a0;                                   // 0x3a0
    char _p6[0x4a8 - 0x3a8];
    SoundPtr m_4a8;                                    // 0x4a8
    char _p7[0x4d0 - 0x4b0];
    std::vector<Vec3> m_4d0;                           // 0x4d0
    void dropKit();
    void releaseAnimation();
    virtual ~Soldier();
};

Soldier::~Soldier()
{
    dropKit();
    releaseAnimation();
    SoundPtr* snd = &m_4a8;
    snd->p->stopDrowningSound();
}
} } }
