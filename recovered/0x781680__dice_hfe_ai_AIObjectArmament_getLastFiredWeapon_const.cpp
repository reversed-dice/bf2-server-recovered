// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x781680
#include <vector>
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
namespace dice { namespace hfe {
namespace ai {
class IWeapon {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57)
    virtual double getTime() const;
};
class AIObjectArmament {
public:
    char _pad0[0x10];
    std::vector<IWeapon*> m_weapons;
    char _pad1[0x10];
    int m_activeWeapon;
    IWeapon* getLastFiredWeapon() const;
};
IWeapon* AIObjectArmament::getLastFiredWeapon() const {
    IWeapon* best = 0;
    double bestTime = -1.0;
    for (std::vector<IWeapon*>::const_iterator it = m_weapons.begin(); it != m_weapons.end(); ++it) {
        IWeapon* w = *it;
        if (!w) continue;
        if (w->getTime() > bestTime) {
            best = w;
            bestTime = w->getTime();
        }
    }
    return best;
}
}}}
