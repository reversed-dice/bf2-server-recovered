// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7944b0
namespace dice { namespace hfe {

enum KitType { };

namespace ai {

class IKitTemplate {
public:
    IKitTemplate();
    virtual void setStrategicStrength(int, int);
    virtual void getStrategicStrengths() const;
    virtual void getStrategicStrength(int) const;
    virtual void setBattleStrength(int, int);
    virtual void getBattleStrengths() const;
    virtual void getBattleStrength(int) const;
    virtual void getType() const;
    virtual ~IKitTemplate();
};

class KitTemplate : public IKitTemplate {
public:
    KitTemplate(KitType);
    virtual void setStrategicStrength(int, int);
    virtual void getStrategicStrengths() const;
    virtual void getStrategicStrength(int) const;
    virtual void setBattleStrength(int, int);
    virtual void getBattleStrengths() const;
    virtual void getBattleStrength(int) const;
    virtual void getType() const;
    virtual ~KitTemplate();

    int* m_a;
    int* m_b;
    int m_type;
    char m_flag;
};

KitTemplate::KitTemplate(KitType t) : IKitTemplate(), m_type(t) {
    m_flag = 0;
    m_a = new int[2];
    m_b = new int[6];
    for (int i = 0; i < 6; i++) m_b[i] = 0;
    m_a[0] = 0;
    m_a[1] = 0;
}

} } }
