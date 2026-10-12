// FUNCTION: BF2 0x536d10
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;

class PlayerControlObject {
public:
    virtual void v0();
    virtual IObject* getWeapon(int);
    virtual void v122();
    virtual void lockWeapon(IObject*, int);
    virtual void toggleOnWeaponLock(IObject*);

    char pad[0x350 - 8];
    std::vector<IObject*> m_weapons[3];
};

typedef IObject* (*Vfn3C8)(PlayerControlObject*, int);
typedef void (*Vfn3D8)(PlayerControlObject*, IObject*, int);

void PlayerControlObject::toggleOnWeaponLock(IObject* obj)
{
    for (int i = 0; i < 3; ++i) {
        for (std::vector<IObject*>::iterator it = m_weapons[i].begin(); it != m_weapons[i].end(); ++it) {
            if (*it == obj) {
                Vfn3C8 f3c8 = (Vfn3C8)(*(void***)this)[121];
                if (f3c8(this, i) == obj)
                    return;
                Vfn3D8 f3d8 = (Vfn3D8)(*(void***)this)[123];
                f3d8(this, obj, i);
                return;
            }
        }
    }
}

} } }
