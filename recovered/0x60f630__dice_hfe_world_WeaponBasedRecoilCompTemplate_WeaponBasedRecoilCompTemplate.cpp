// FUNCTION: BF2 0x60f630
namespace dice { namespace hfe { namespace world {

class RecoilCompTemplate {
public:
    RecoilCompTemplate();
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

class IWeaponBasedRecoilComp {
public:
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
};

class WeaponBasedRecoilCompTemplate : public RecoilCompTemplate, public IWeaponBasedRecoilComp {
public:
    WeaponBasedRecoilCompTemplate();
    void setRecoilSpeed(float);
    void setRecoilSpeedGB(float);
    int m_0x10;
    float m_0x14;
    float m_0x18;
    float m_0x1c;
    float m_0x20;
    char _pad24[8];
    float m_0x2c;
    float m_0x30;
};

WeaponBasedRecoilCompTemplate::WeaponBasedRecoilCompTemplate()
{
    m_0x14 = 0.0f;
    m_0x18 = 0.0f;
    m_0x1c = 0.0f;
    m_0x20 = 0.0f;
    m_0x2c = 0.0f;
    m_0x30 = 0.0f;
    m_0x10 = 1;
    setRecoilSpeed(0.0f);
    setRecoilSpeedGB(0.0f);
}

} } }
