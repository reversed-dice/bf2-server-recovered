// FUNCTION: BF2 0x60ec20
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class RecoilCompTemplate { public: unsigned char pad[0x100]; };
class WeaponBasedRecoilCompTemplate : public RecoilCompTemplate { public: unsigned char pad2[0x100]; };

struct Vec3 { float x; float y; float z; Vec3() { x = 0.0f; y = 0.0f; z = 0.0f; } };

class Component { public: virtual ~Component(); unsigned char m_pad[0x18]; };
class IRecoilComp { public: virtual void i0(); virtual void i1(); };

class RecoilComp : public Component, public IRecoilComp {
public:
    RecoilComp(RecoilCompTemplate*);
    virtual void rc0();
};

class WeaponBasedRecoilComp : public RecoilComp {
    unsigned char m_pad0[0x58];
    int m_a;
    Vec3 m_v;
    int m_e;
    int m_f;
    WeaponBasedRecoilCompTemplate* m_template;
public:
    WeaponBasedRecoilComp(WeaponBasedRecoilCompTemplate* t);
    virtual void rc0();
};

WeaponBasedRecoilComp::WeaponBasedRecoilComp(WeaponBasedRecoilCompTemplate* t)
    : RecoilComp(t), m_a(1), m_e(0), m_f(0), m_template(t)
{
}

} } }
