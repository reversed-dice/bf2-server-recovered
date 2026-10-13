// FUNCTION: BF2 0x60e230
#include <string>
namespace dice { namespace hfe {

struct WorldPref { static unsigned int getTickCount(); };

namespace world {

extern const unsigned int IID_ISoldier;
class WeaponFireEvent;

class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int) const;
};

class SoldierBasedRecoilComp {
public:
    void postFire(WeaponFireEvent& e);
    void calcRecoil();
private:
    char m_pad0[0x18];
    char* m_owner;
    char m_pad1[0x84 - 0x20];
    unsigned int m_fireTick[10];
    int m_count;
    char m_pad2[0xc0 - 0xb0];
    char* m_recoilTemplate;
};

void SoldierBasedRecoilComp::postFire(WeaponFireEvent& e) {
    IObject* t = 0;
    IObject* p = *(IObject**)(m_owner + 0x50);
    while (p != 0) {
        if (p->queryInterface(IID_ISoldier) != 0) {
            t = p;
            break;
        }
        p = *(IObject**)((char*)p + 0x50);
    }
    if (m_recoilTemplate[0x48] == 0)
        return;
    if (t == 0)
        return;
    calcRecoil();
    int i = m_count + 1;
    m_count = i;
    if (i > 9) {
        i = 0;
        m_count = 0;
    }
    m_fireTick[i] = WorldPref::getTickCount();
}

}}}
