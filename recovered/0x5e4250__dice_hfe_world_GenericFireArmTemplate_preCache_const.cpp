// FUNCTION: BF2 0x5e4250
namespace dice { namespace hfe { namespace world {

class IWeaponTargetCompTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void preCache();   // 0x58
};

class ProjectileTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void preCache();   // 0xd8
};

extern int IID_IWeaponTargetCompTemplate;

class GenericFireArmTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void* queryInterface(int iid) const;   // 0xb8
    void preCache() const;
    ProjectileTemplate* getProjectileTemplate() const;
};

void GenericFireArmTemplate::preCache() const
{
    IWeaponTargetCompTemplate* c =
        (IWeaponTargetCompTemplate*)queryInterface(dice::hfe::world::IID_IWeaponTargetCompTemplate);
    if (c != 0)
        c->preCache();
    ProjectileTemplate* p = getProjectileTemplate();
    if (p != 0)
        p->preCache();
}

}}}
