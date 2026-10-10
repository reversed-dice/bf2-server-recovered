// FUNCTION: BF2 0x791a60
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
namespace world {
class IWeapon {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30();
    virtual void addAmmo(int amount, int zero);
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37();
    virtual int getNumberOfMags() const;
    virtual void v39(); virtual void v40(); virtual void v41();
    virtual int getMagSize() const;
};
}

namespace ai {

class WeaponObject {
public:
    char _pad[0x10];
    world::IWeapon* m_weapon;

    bool refillAmmo(float frac);
};

bool WeaponObject::refillAmmo(float frac) {
    int total = m_weapon->getNumberOfMags() * m_weapon->getMagSize();
    long amount = (long)(total * frac);
    if ((int)amount != 0) {
        m_weapon->addAmmo((int)amount, 0);
        return true;
    }
    return false;
}

} } }
