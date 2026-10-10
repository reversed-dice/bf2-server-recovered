// FUNCTION: BF2 0x60c6f0
namespace dice { namespace hfe { namespace world {

class RecoilCompTemplate { public: unsigned char pad[0x100]; };
class SoldierBasedRecoilCompTemplate : public RecoilCompTemplate { public: unsigned char pad2[0x100]; };

class Component { public: virtual ~Component(); unsigned char m_pad[0x18]; };
class IRecoilComp { public: virtual void i0(); virtual void i1(); };

class RecoilComp : public Component, public IRecoilComp {
public:
    RecoilComp(RecoilCompTemplate*);
    virtual void rc0();
};

class SoldierBasedRecoilComp : public RecoilComp {
    unsigned char m_pad0[0x58];
    int m_a;
    unsigned char m_pad1[0x28];
    int m_b;
    bool m_zoomed;
    unsigned char m_pad2[3];
    float m_c;
    float m_d;
    unsigned char m_pad3[4];
    SoldierBasedRecoilCompTemplate* m_template;
public:
    SoldierBasedRecoilComp(SoldierBasedRecoilCompTemplate* t);
    virtual void rc0();
};

SoldierBasedRecoilComp::SoldierBasedRecoilComp(SoldierBasedRecoilCompTemplate* t)
    : RecoilComp(t), m_a(1), m_b(-1), m_zoomed(false), m_template(t)
{
    float z = 0.0f;
    m_c = z;
    m_d = z;
}


} } }
