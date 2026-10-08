// FUNCTION: BF2 0x5ed610
namespace dice { namespace hfe { namespace world {

class IObject;

extern int CID_KitTemplate;

class AbilityProvider {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int getClassId();   // +0x20
};

class Kit {
public:
    char pad_0x0[0x28];
    AbilityProvider* m_template;   // +0x28

    float getCurrentAbility() const;
};

Kit* getRootParent(IObject const*);

class Soldier {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37();
    virtual float getAbility();   // +0x130
};

class ReplenishingAmmoComp {
public:
    char pad_0x0[0x18];
    IObject* m_owner;   // +0x18

    Soldier* getSoldier() const;
    float getAbility() const;
};

float ReplenishingAmmoComp::getAbility() const {
    Soldier* soldier = getSoldier();
    if (soldier != 0) {
        return soldier->getAbility();
    }

    Kit* kit = getRootParent(m_owner);
    if (kit->m_template->getClassId() != CID_KitTemplate) {
        return 0.0f;
    }

    return kit->getCurrentAbility();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_getAbility_const (0x5ed610)
