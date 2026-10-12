// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5063a0
#include <list>

namespace dice { namespace hfe { namespace world {

class BundleTemplate;
class AmbientEffectAreaTemplate;

class Bundle {
public:
    Bundle(BundleTemplate const*);
    virtual ~Bundle();
#define V(n) virtual void _v##n();
    V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
#undef V
    char _pad[0xF8];
};

class Interface2 {
public:
    virtual ~Interface2();
    char _pad[0x130];
};

extern int areaId;

class AmbientEffectArea : public Bundle, public Interface2 {
public:
    AmbientEffectArea(AmbientEffectAreaTemplate const* tmpl);
    virtual ~AmbientEffectArea();

    int m_unk238;
    AmbientEffectAreaTemplate const* m_template; // 0x240
    std::list<void*> m_list;                     // 0x248
    void* m_unk258;                              // 0x258
    int m_areaId;                                // 0x260
    char _pad264[4];
    void* m_unk268;                              // 0x268
    void* m_unk270;                              // 0x270
};

AmbientEffectArea::AmbientEffectArea(AmbientEffectAreaTemplate const* tmpl)
    : Bundle((BundleTemplate const*)tmpl),
      m_unk238(1),
      m_template(tmpl),
      m_unk258((void*)0x759dc150),
      m_unk268(0),
      m_unk270(0)
{
    m_areaId = areaId++;
}

} } }
