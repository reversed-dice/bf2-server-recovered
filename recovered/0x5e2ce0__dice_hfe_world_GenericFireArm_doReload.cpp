// FUNCTION: BF2 0x5e2ce0
namespace dice { namespace hfe { namespace world {

class IWeaponComp {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17();
    virtual void setAmmo(int ammo);
};
class IAmmoComp {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27(); virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31(); virtual void _v32(); virtual void _v33(); virtual void _v34();
    virtual void reload();
    virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39(); virtual void _v40(); virtual void _v41(); virtual void _v42(); virtual void _v43(); virtual void _v44(); virtual void _v45(); virtual void _v46(); virtual void _v47(); virtual void _v48();
    virtual int getMagSize();
};

class GenericFireArm {
public:
    void doReload();
    char _pad0[0x290];
    IWeaponComp* m_fire;
    char _pad298[0x8];
    IWeaponComp* m_sound;
    IWeaponComp* m_anim;
    IAmmoComp* m_ammo;
    char _pad2b8[0x8];
    IWeaponComp* m_zoom;
    char _pad2c8[0x8];
    IWeaponComp* m_recoil;
};

void GenericFireArm::doReload()
{
    m_ammo->reload();
    int n = m_ammo->getMagSize();
    if (m_fire) m_fire->setAmmo(n);
    if (m_sound) m_sound->setAmmo(n);
    if (m_anim) m_anim->setAmmo(n);
    if (m_recoil) m_recoil->setAmmo(n);
    if (m_zoom) m_zoom->setAmmo(n);
}

} } }
