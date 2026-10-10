// FUNCTION: BF2 0x5f62b0
#include <vector>

namespace dice { namespace hfe { namespace world {

typedef int FireRate;

class FireCompTemplate {
public:
    char _pad[0x38];
    std::vector<FireRate> m_validFireRates; // +0x38
};

class FireComp {
public:
    virtual ~FireComp();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual bool isFireRateValid(FireRate rate);

    char _pad[0x40 - 8];
    FireRate m_currentFireRate; // +0x40
    char _pad2[0xc0 - 0x44];
    FireCompTemplate* m_template; // +0xc0
};

bool FireComp::isFireRateValid(FireRate rate) {
    if (m_currentFireRate == rate) {
        return true;
    }
    const std::vector<FireRate>& v = m_template->m_validFireRates;
    for (unsigned int i = 0; i < v.size(); ++i) {
        if (v[i] == rate) {
            return true;
        }
    }
    return false;
}

} } }
