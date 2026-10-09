// FUNCTION: BF2 0x781770
#include <vector>
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace ai {
class IPhysics {
public:
    V10(0) V10(1) V(20) V(21) V(22) V(23)
    virtual const Vec3* getVelocity();
};
class IAIOObject {
public:
    char _pad0[0x88];
    IPhysics* m_physics;
};
class IWeapon {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V(70)
    virtual IAIOObject* getProjectile();
};
class AIObjectArmament {
public:
    char _pad0[0x10];
    std::vector<IWeapon*> m_weapons;
    char _pad1[0x10];
    int m_activeWeapon;
    bool getProjectileSpeed(Vec3& out) const;
};
bool AIObjectArmament::getProjectileSpeed(Vec3& out) const {
    IWeapon* w = m_weapons[m_activeWeapon];
    if (!w) return false;
    IAIOObject* o = w->getProjectile();
    if (!o) return false;
    const unsigned* s = (const unsigned*)o->m_physics->getVelocity();
    unsigned z = s[2];
    unsigned y = s[1];
    unsigned x = s[0];
    unsigned* d = (unsigned*)&out;
    d[0] = x;
    d[1] = y;
    d[2] = z;
    return true;
}
}}}
